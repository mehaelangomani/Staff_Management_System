# 📘 STAFF MANAGEMENT SYSTEM (C Programming)

## 📄 ABSTRACT
The **Staff Management System** is a terminal-based application written in **C** that allows users to manage staff or employee records efficiently. The system provides core functionalities such as adding new staff details, viewing records, searching by ID, updating information, and deleting staff entries. All data is stored persistently in a **binary file (staff.txt)**, ensuring it remains available across program runs.  
This project demonstrates key C programming concepts such as **structures, file handling, control flow, and modular programming**, making it ideal for beginners, students, and small-scale administrative purposes.

---

# ✨ FEATURES

## Core Functionalities
- ➕ Add new staff records (ID, Name, Age, Designation, Salary)  
- 📋 Display all staff records in a clean tabular format  
- 🔍 Search for staff using their unique ID  
- ✏️ Update existing staff information  
- ❌ Delete staff records  
- 💾 Persistent data storage using a binary file (`staff.txt`)  
- 🖥️ Fully terminal-based, menu-driven interface  
- 👨‍💻 Beginner-friendly implementation using functions and structures  
- ⚙️ Auto-creation of data file if it does not exist  
- ⚠️ Basic error handling for invalid inputs and missing files  

---

# 🛠️ TECHNICAL REQUIREMENTS

## System Requirements
- Operating System: **Windows / Linux / macOS**
- Terminal or Command Prompt
- Minimum 4 MB RAM
- Minimal disk space to store `staff.txt`

## Software Requirements
- C Compiler: **GCC / MinGW / Clang / MSVC**
- Any code editor or IDE (VS Code, Code::Blocks, Dev-C++, etc.)
- Optional: Make utility (if using a Makefile)

## Programming Requirements
- Programming Language: **C**
- Supported Standards: **C89 / C99 / C11**
- Required header files:  
  `stdio.h`, `stdlib.h`, `string.h`

## File Handling Requirements
- Read/write permission in the working directory
- Staff data stored in **binary format** in `staff.txt`
- Program automatically creates the file if it does not exist

---

# 📌 FUNCTIONAL REQUIREMENTS

## User Interface
- Operates entirely through the terminal (CLI)
- Displays a clear and simple menu
- Validates user input before processing

## Staff Record Operations
### ➕ Add Staff  
Allows the user to enter staff ID, name, age, designation, and salary. Data is saved to `staff.txt`.

### 📋 Display Staff  
Prints all stored staff records in a formatted table.

### 🔍 Search Staff  
Searches the database using a unique staff ID.

### ✏️ Update Staff  
Allows modification of name, age, designation, or salary for an existing record.

### ❌ Delete Staff  
Deletes a record permanently using a temporary file method for safety.

## Data Management
- Uses binary file storage for speed and simplicity  
- Implements safe update/delete operations using temporary file handling  
- Gracefully handles empty or missing data files  

## Program Flow
- Menu loops until the user selects **Exit**
- Displays confirmations and error messages
- Ensures smooth transitions between operations

---



## 2️⃣ Run the Executable

### Linux / macOS:
./staff

### windows
staff.exe

## 3️⃣ Data File
Program automatically creates staff.txt if it does not exist
All staff records are saved to and loaded from this file in binary format

## 📸 Screenshots

Add Staff
<img width="574" height="440" alt="image" src="https://github.com/user-attachments/assets/98af9c7f-925e-450b-a0c0-7d3ea6b4794b" />

Display Staff

Search Staff

Update Staff

Delete Staff

Exit

### 📝 Author

Meha.E
