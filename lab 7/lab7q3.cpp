#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;

public:
    Employee() {
        name = "devansh";
        id = 0;
    }
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};
int main() {
    Employee employee;
    employee.displayDetails();
    return 0;
}
