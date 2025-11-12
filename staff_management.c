#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Staff {
    int id;
    char name[50];
    int age;
    char designation[50];
    float salary;
};

// Function declarations
void addStaff();
void displayAll();
void searchStaff();
void updateStaff();
void deleteStaff();

int main() {
    int choice;

    while(1) {
        printf("\n====== Staff Management System ======\n");
        printf("1. Add Staff Record\n");
        printf("2. Display All Staff\n");
        printf("3. Search Staff by ID\n");
        printf("4. Update Staff\n");
        printf("5. Delete Staff\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStaff(); break;
            case 2: displayAll(); break;
            case 3: searchStaff(); break;
            case 4: updateStaff(); break;
            case 5: deleteStaff(); break;
            case 6: exit(0);
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void addStaff() {
    struct Staff s;
    FILE *fp = fopen("staff.txt", "a");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Staff ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    getchar(); // clear newline
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Designation: ");
    getchar();
    fgets(s.designation, 50, stdin);
    s.designation[strcspn(s.designation, "\n")] = 0;
    printf("Enter Salary: ");
    scanf("%f", &s.salary);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
    printf("Staff record added successfully!\n");
}

void displayAll() {
    struct Staff s;
    FILE *fp = fopen("staff.txt", "r");

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\n%-10s %-20s %-5s %-15s %-10s\n", "ID", "Name", "Age", "Designation", "Salary");
    printf("-------------------------------------------------------------\n");

    while(fread(&s, sizeof(s), 1, fp)) {
        printf("%-10d %-20s %-5d %-15s %-10.2f\n", s.id, s.name, s.age, s.designation, s.salary);
    }

    fclose(fp);
}

void searchStaff() {
    struct Staff s;
    int id, found = 0;
    FILE *fp = fopen("staff.txt", "r");

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter Staff ID to search: ");
    scanf("%d", &id);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.id == id) {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nDesignation: %s\nSalary: %.2f\n",
                   s.id, s.name, s.age, s.designation, s.salary);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No record found with ID %d.\n", id);

    fclose(fp);
}

void updateStaff() {
    struct Staff s;
    FILE *fp, *temp;
    int id, found = 0;

    fp = fopen("staff.txt", "r");
    temp = fopen("temp.txt", "w");

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter Staff ID to update: ");
    scanf("%d", &id);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.id == id) {
            found = 1;
            printf("Enter new Name: ");
            getchar();
            fgets(s.name, 50, stdin);
            s.name[strcspn(s.name, "\n")] = 0;
            printf("Enter new Age: ");
            scanf("%d", &s.age);
            printf("Enter new Designation: ");
            getchar();
            fgets(s.designation, 50, stdin);
            s.designation[strcspn(s.designation, "\n")] = 0;
            printf("Enter new Salary: ");
            scanf("%f", &s.salary);
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);
    remove("staff.txt");
    rename("temp.txt", "staff.txt");

    if(found)
        printf("Record updated successfully!\n");
    else
        printf("No record found with ID %d.\n", id);
}

void deleteStaff() {
    struct Staff s;
    FILE *fp, *temp;
    int id, found = 0;

    fp = fopen("staff.txt", "r");
    temp = fopen("temp.txt", "w");

    if(fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter Staff ID to delete: ");
    scanf("%d", &id);

    while(fread(&s, sizeof(s), 1, fp)) {
        if(s.id != id) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);
    remove("staff.txt");
    rename("temp.txt", "staff.txt");

    if(found)
        printf("Record deleted successfully!\n");
    else
        printf("No record found with ID %d.\n", id);
}
