# 🏢 Employee Management System

A simple, console-based Employee Management System written in C++. This project demonstrates fundamental concepts of Object-Oriented Programming (OOP), including classes, objects, and encapsulation. It provides a straightforward command-line interface to perform basic employee data management.

---

## ✨ Features

*   **Add New Employee:** Easily add new employees to the system by providing their ID, Name, and Salary.
*   **Display All Employees:** View a neatly formatted list of all employees currently stored in the system.
*   **Dynamic Data Handling:** Utilizes an array of `Employee` objects to manage data.
*   **User-Friendly CLI:** An interactive command-line menu for easy navigation and operation.
*   **Capped Capacity:** The system is currently configured to handle up to 100 employees.

---

## 🚀 Getting Started

Follow these instructions to get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

To compile and run this project, you will need a C++ compiler. The GNU C++ Compiler (`g++`) is a common choice and is included in most Linux distributions and can be installed on macOS and Windows.

*   **Windows:** You can use MinGW or Windows Subsystem for Linux (WSL).
*   **macOS:** Install Xcode Command Line Tools.
*   **Linux:** Install the `build-essential` package.
    ```sh
    sudo apt-get update
    sudo apt-get install build-essential
    ```

### Compilation & Execution

1.  **Clone the repository or save the code:**
    Save this entire code block into a file named `main.cpp`.

2.  **Navigate to the project directory:**
    Open your terminal or command prompt and change the directory to where you saved `main.cpp`.
    ```sh
    cd path/to/your/project
    ```

3.  **Compile the source code:**
    Use your C++ compiler to create an executable file. The following command will create an executable named `employee_management`.
    ```sh
    g++ main.cpp -o employee_management
    ```

4.  **Run the application:**
    Execute the compiled program from your terminal.

    *   On **Windows**:
        ```sh
        employee_management.exe
        ```
    *   On **macOS and Linux**:
        ```sh
        ./employee_management
        ```

---

## 📖 How to Use

Once the application is running, you will be greeted with a command-line menu:
 **To Add an Employee:**
    1.  Enter `1` and press `Enter`.
    2.  Follow the prompts to input the `Employee ID`, `Employee Name`, and `Employee Salary`.
    3.  A success message will confirm that the employee has been added.

*   **To Display All Employees:**
    1.  Enter `2` and press `Enter`.
    2.  A list of all registered employees with their details will be displayed.

*   **To Exit the Program:**
    1.  Enter `3` and press `Enter`.

---

## 🔧 Code Overview

The program is built around the `Employee` class, which encapsulates the data for a single employee.

### `Employee` Class

*   **Private Members:**
    *   `int id`: Stores the employee's unique identifier.
    *   `string name`: Stores the employee's full name.
    *   `double salary`: Stores the employee's salary.
*   **Public Methods:**
    *   `setEmployeeID(int)`: Sets the employee's ID.
    *   `setEmployeeName(string)`: Sets the employee's name.
    *   `setEmployeeSalary(double)`: Sets the employee's salary.
    *   `displayEmployeeDetails()`: Prints the employee's details to the console.

### `main()` Function

*   The `main` function acts as the driver for the program.
*   It initializes an array of `Employee` objects with a fixed size (`MAX_EMPLOYEES`).
*   A `do-while` loop presents the main menu to the user.
*   A `switch` statement handles user input to call the appropriate functionalities (add, display, or exit).

---
