#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    double salary;

public:
    void setEmployeeID(int empid)
    {
        id = empid;
    }

    void setEmployeeName(string empname)
    {
        name = empname;
    }

    void setEmployeeSalary(double empsalary)
    {
        salary = empsalary;
    }
    void displayEmployeeDetails()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    const int MAX_EMPLOYEES = 100;

    Employee employees[MAX_EMPLOYEES];

    int employeeCount = 0;

    int choice;

    do
    {
        cout << "\n--- Employee Management System ---" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (employeeCount < MAX_EMPLOYEES)
            {
                int id;
                string name;
                double salary;

                cout << "Enter Employee ID: ";
                cin >> id;

                cout << "Enter Employee Name: ";
                cin >> name;

                cout << "Enter Employee Salary: ";
                cin >> salary;

                employees[employeeCount].setEmployeeID(id);
                employees[employeeCount].setEmployeeName(name);
                employees[employeeCount].setEmployeeSalary(salary);
                employeeCount++;
                cout << "Employee added successfully!" << endl;
            }
            else
            {
                cout << "Cannot add more employees. The database is full." << endl;
            }
            break;
        case 2:
            cout << "\n--- All Employee Details ---" << endl;
            for (int i = 0; i < employeeCount; i++)
            {
                employees[i].displayEmployeeDetails();
            }

            break;
        case 3:
            cout << "Exiting the system." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        }
    } while (choice != 3);

    return 0;
}