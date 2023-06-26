#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Employee {
protected:
    int empId;
    float salary;
public:
    void setEmployeeDetails(int id, float sal) {
        empId = id;
        salary = sal;
    }
    void displayEmployeeDetails() {
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: $" << salary << endl;
    }
};
class Manager : public Person, public Employee {
private:
    string department;
    string designation;
public:
    void setManagerDetails(string dept, string desig) {
        department = dept;
        designation = desig;
    }
    void displayManagerDetails() {
        displayPersonDetails();
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
    }
};
int main() {
    Manager manager;
    string name, department, designation;
    int age, empId;
    float salary;
    cout << "Enter the manager's name: ";
    getline(cin, name);
    cout << "Enter the manager's age: ";
    cin >> age;
    cout << "Enter the manager's employee ID: ";
    cin >> empId;
    cout << "Enter the manager's salary: $";
    cin >> salary;
    cout << "Enter the manager's department: ";
    getline(cin, department);
    cout << "Enter the manager's designation: ";
    getline(cin, designation);
    manager.setPersonDetails(name, age);
    manager.setEmployeeDetails(empId, salary);
    manager.setManagerDetails(department, designation);
    cout << "\nManager Details:\n";
    manager.displayManagerDetails();
    return 0;
}
