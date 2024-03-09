#include <iostream>
#include <string>
#include <vector>
#include <limits> // Include the <limits> header for numeric_limits
using namespace std;

// Define a class representing an Employee
class Employee {
public:
    string name;
    int id;
    double salary;

    // Default constructor
    Employee() {
        name = "";
        id = 0;
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }

    // Function to display employee information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Function to create an Employee object
Employee createEmployee() {
    string name;
    int id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter employee salary: $";
    cin >> salary;

    // Clear input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return Employee(name, id, salary);
}

// Function to edit an employee's details by ID
void editEmployee(vector<Employee>& employees, int id) {
    for (size_t i = 0; i < employees.size(); ++i) {
        if (employees[i].id == id) {
            cout << "Enter new name for employee with ID " << id << ": ";
            getline(cin, employees[i].name);
            
            cout << "Enter new salary for employee with ID " << id << ": $";
            cin >> employees[i].salary;

            cout << "Employee details updated successfully." << endl;
            return;
        }
    }
    cout << "Employee with ID " << id << " not found." << endl;
}

// Function to delete an employee by ID
void deleteEmployee(vector<Employee>& employees, int id) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->id == id) {
            it = employees.erase(it);
            cout << "Employee with ID " << id << " deleted successfully." << endl;
            return;
        }
    }
    cout << "Employee with ID " << id << " not found." << endl;
}
 
int main() {
    vector<Employee> employees;

    int choice;
    do {
        cout << "1. Add Employee\n"
             << "2. Edit Employee\n"
             << "3. Delete Employee\n"
             << "4. Display All Employees\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1: {
                Employee newEmployee = createEmployee();
                employees.push_back(newEmployee);
                cout << "Employee added successfully." << endl;
                break;
            }
            case 2: {
                int id;
                cout << "Enter ID of employee to edit: ";
                cin >> id;
                cin.ignore(); // Clear input buffer
                editEmployee(employees, id);
                break;
            }
            case 3: {
                int id;
                cout << "Enter ID of employee to delete: ";
                cin >> id;
                cin.ignore(); // Clear input buffer
                deleteEmployee(employees, id);
                break;
            }
            case 4: {
                cout << "Employee Information:" << endl;
                for (const auto& emp : employees) {
                    emp.displayInfo();
                    cout << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
