# 🎓 Student Record Management System Using Singly Linked List

A menu-driven **Student Record Management System** developed in **C Programming** using a **Singly Linked List** data structure. The project demonstrates dynamic memory allocation, linked list operations, sorting, searching, file handling, and modular programming concepts in Linux.

This application allows users to efficiently manage student records through a command-line interface by performing operations such as adding, displaying, modifying, deleting, sorting, reversing, and saving student data.

---

## ✨ Features

### ➕ Add Student Records
- Add new student details dynamically.
- Automatic roll number generation.
- Stores:
  - Roll Number
  - Student Name
  - Percentage

### 📋 Display Student Records
- Display all student records in a formatted table.
- Easy-to-read output format.

### ✏️ Modify Student Records
Modify student information using:
- Roll Number
- Name
- Percentage

### 🗑️ Delete Student Records
Delete student records based on:
- Roll Number
- Name

### 📊 Sort Student Records
Sort records by:
- Name (Alphabetical Order)
- Percentage (Descending Order)

### 🔄 Reverse Student Database
Reverse the complete linked list.

### 💾 Save Records to File
Save all student records into a file for future reference.

### 🧹 Delete Entire Database
Delete all student records from memory.

---

## 🛠️ Technologies Used

- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- GCC Compiler
- Makefile
- Linux Operating System

---

## 📂 Project Structure

```text
.
├── main.c
├── header.h
├── stud_add.c
├── stud_show.c
├── stud_del.c
├── stud_mod.c
├── stud_sort.c
├── stud_reverse.c
├── stud_delete_all.c
├── stud_save.c
├── Makefile
└── README.md
```

---

## 📌 Data Structure Used

```c
typedef struct student
{
    int roll;
    char name[50];
    float percentage;
    struct student *next;
} sll;
```

Each node stores:
- Roll Number
- Student Name
- Percentage
- Address of Next Node

---

## ⚙️ Installation & Setup Guide

### 📥 Step 1: Clone the Repository

```bash
git clone https://github.com/deyyalaudaykiran/Student-Record-Management-System.git
```

### 📂 Step 2: Navigate to Project Directory

```bash
cd Student-Record-Management-System
```

---

## 🛠️ System Requirements

### Supported Operating Systems

- Ubuntu
- Debian
- Kali Linux
- Fedora
- Arch Linux

### Install Required Packages

#### Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential make
```

#### Fedora

```bash
sudo dnf install gcc make
```

#### Arch Linux

```bash
sudo pacman -S gcc make
```

---

## ⚙️ Step 3: Compile the Project Using Makefile

Compile the project:

```bash
make
```

The Makefile automatically:
- Compiles all source files
- Generates object files
- Links all modules
- Creates the final executable

---

## ▶️ Step 4: Run the Application

```bash
./exe
```
---

## 📋 Main Menu

```text
===== STUDENT MENU RECORD =====

A/a : Add a New Student
S/s : Show Student Database
D/d : Delete Student Record
M/m : Modify Student Record
V/v : Save Records
T/t : Sort Student Database
L/l : Delete All Nodes
R/r : Reverse Student Database
E/e : Exit
```

---

## 💬 Sample Execution

### Add Student Records

```text
Enter name:
Dhoni

Enter percentage:
89.50

Record added successfully with roll number: 1
```

```text
Enter name:
Virat

Enter percentage:
94.20

Record added successfully with roll number: 2
```

```text
Enter name:
Rohit

Enter percentage:
91.80

Record added successfully with roll number: 3
```

```text
Enter name:
Gayle

Enter percentage:
87.60

Record added successfully with roll number: 4
```

---

### Show Student Records

```text
Rollno  Name                     Percentage
------------------------------------------------
1       Dhoni                    89.50
2       Virat                    94.20
3       Rohit                    91.80
4       Gayle                    87.60

Record displayed successfully
```

---

### Sort by Percentage

Before Sorting:

```text
Dhoni  89.50
Virat  94.20
Rohit  91.80
Gayle  87.60
```

After Sorting:

```text
Virat  94.20
Rohit  91.80
Dhoni  89.50
Gayle  87.60
```

---

### Reverse Student Records

Before:

```text
Dhoni → Virat → Rohit → Gayle
```

After:

```text
Gayle → Rohit → Virat → Dhoni
```

---

## 💾 Save Student Records

Select:

```text
V
```

Then:

```text
S
```

Records will be saved into:

```text
student.data
```

Example:

```text
1 Dhoni 89.50
2 Virat 94.20
3 Rohit 91.80
4 Gayle 87.60
```

---

## 📚 Source File Description

| File Name | Description |
|------------|-------------|
| main.c | Main menu and application flow |
| header.h | Structure definition and function declarations |
| stud_add.c | Add student records |
| stud_show.c | Display student records |
| stud_del.c | Delete records by roll number or name |
| stud_mod.c | Modify existing student records |
| stud_sort.c | Sort records by name or percentage |
| stud_reverse.c | Reverse the linked list |
| stud_delete_all.c | Delete all student records |
| stud_save.c | Save records into a file |
| Makefile | Automates compilation process |

---

## 🔍 Program Flow

```text
Start Program
      │
      ▼
Display Menu
      │
      ▼
Select Operation
      │
 ┌────┼────┬────┬────┐
 ▼    ▼    ▼    ▼    ▼
Add Show Modify Delete Sort
      │
      ▼
Reverse List
      │
      ▼
Save Data
      │
      ▼
Exit
```

---

## 🧠 Concepts Demonstrated

✔️ Singly Linked List

✔️ Dynamic Memory Allocation

✔️ File Handling

✔️ Sorting Algorithms

✔️ Searching Techniques

✔️ Pointer Manipulation

✔️ Modular Programming

✔️ Menu-Driven Programming

✔️ Build Automation Using Makefile

✔️ Linux Application Development

---

## 🚀 Future Enhancements

- Load records automatically at startup
- Search student records feature
- Student ranking system
- CSV export support
- SQLite/MySQL database integration
- Attendance management module
- GUI interface using GTK or Qt
- Student performance analytics dashboard

---

## 👨‍💻 Learning Outcomes

This project helps understand:

- Linked List Data Structures
- Dynamic Memory Management
- File Handling in C
- Searching and Sorting Techniques
- Modular Programming
- Makefile Build Automation
- Linux Development Environment
- Real-World Record Management Systems

---

## ⭐ Support

If you found this project useful:

⭐ Star the Repository


🛠️ Contribute Improvements

📢 Share with fellow developers and students

---

### Developed using C Programming and Singly Linked Lists to demonstrate efficient student record management in Linux.
