📘 Staff Management System
A File-Based Record Management Application in C
📄 Overview
The Staff Management System is a comprehensive, menu-driven console application built using the C programming language.
It provides a streamlined way to manage staff information through file handling operations, offering a complete CRUD (Create, Read, Update, Delete) workflow.
This project is especially suitable for:
Students learning file handling in C
Academic project submissions
Beginners practicing structured programming and modular design
Anyone wanting a simple yet functional data management system without a database
The system uses a persistent binary file (staff.txt) to store staff details, enabling long-term data retention between program executions.
📌 Functional Requirements
1. Add Staff Record
Input the following staff details:
ID
Name
Age
Designation
Salary
Record is appended to staff.txt in binary format
Ensures efficient data writing using fwrite()
2. Display All Records
Reads data sequentially from staff.txt
Displays all staff information in a neat, tabular layout
Automatically handles all stored records without additional commands
3. Search Staff by ID
Prompts user to input a Staff ID
Searches file linearly using fread()
Displays the complete details of the matched staff record
Provides appropriate message if ID is not found
4. Update Staff Record
Locates the record to be updated by ID
Accepts new values for:
Name
Age
Designation
Salary
Uses a temporary file replacement method to ensure data integrity
Rewrites updated data and replaces original file safely
5. Delete Staff Record
Allows deletion of staff by ID
Copies all other staff records to a temporary file
Safely deletes original file and renames the new file
Ensures no corruption or partial data loss
6. Exit Application
Closes the application safely
Ensures all file pointers are properly closed and memory is freed
✨ Features
✔️ Fully menu-driven, beginner-friendly interface
✔️ Simple and clean modular code structure
✔️ Binary file handling with fwrite() and fread() for fast performance
✔️ Efficient update & delete operations using temp files
✔️ Lightweight — no database or external libraries required
✔️ Cross-platform — runs on Linux, Windows, macOS
✔️ Persistent storage — data remains available after program closes
✔️ Easy to extend for advanced features (sorting, filtering, GUI, etc.)
🚀 How to Run the Project
1. Clone the Repository
git clone <your-repository-link>
cd staff-management-system
2. Compile the Source Code
Use GCC or any ANSI C compiler:
gcc staff_management.c -o staff
If you have multiple source files, compile like:
gcc *.c -o staff
3. Run the Executable
./staff
On Windows:
staff.exe
📂 Files Used
File Name	Purpose
staff.txt	Stores all staff records in binary format
temp.txt	Used during update & delete operations to ensure safe rewriting
