#include <iostream>
#include <string>
#include <limits>
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
    cin.ignore();

    return Employee(name, id, salary);
}

int main() {

    int MAX_EMPLOYEES;
    cout<<"----------->Enter number of employees to register<----------\n";
    cin >> MAX_EMPLOYEES;
    
    // Clear input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Employee employees[MAX_EMPLOYEES];

    // Create employee objects
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        cout << "=========== Enter details for employee " << i + 1 << " ============" << endl;
        employees[i] = createEmployee();
        cout << endl;
    }

    // Display employee information
    cout << "----------->Employee Information<----------" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; ++i) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i].displayInfo();
        cout << endl;
    }

    return 0;
}
