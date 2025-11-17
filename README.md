📘 Staff Management System

A File-Based Record Management Application in C


📄 Overview

The Staff Management System is a lightweight, console-based application developed in C that enables efficient management of staff records using file handling operations.
It provides essential CRUD (Create, Read, Update, Delete) functionality without requiring a database, making it ideal for beginners learning file I/O in C or for use as an academic project.


📌 Functional Requirements

1. Add Staff Record
Capture staff details including ID, Name, Age, Designation, and Salary
Append new records to staff.txt using binary write operations

2. Display All Records
Read and display all staff entries in a structured tabular format

3. Search Staff by ID
Retrieve a staff member’s details by entering their unique ID

4. Update Staff Record
Modify an existing record
Uses a temporary file to ensure data integrity during rewrites

5. Delete Staff Record
Remove a specific record by ID
Automatically rewrites all remaining entries to a new file

6. Exit Application
Safely terminates the program


✨ Features

Fully menu-driven interface
Robust file handling using fread() and fwrite()
Modular function-based architecture
No external dependencies or database requirements
Reliable update/delete operations using a temporary file method
Clear input validation and user prompts
Portable — runs on any system with a C compiler


🚀 How to Run the Project

1. Clone the Repository
git clone <your-repository-link>
cd staff-management-system

2. Compile the Source Code
Using GCC:
gcc staff_management.c -o staff

3. Run the Executable
./staff
Files Used
File Name	Purpose
staff.txt	Stores all staff records (binary format)
temp.txt	Used internally for update/delete operations
