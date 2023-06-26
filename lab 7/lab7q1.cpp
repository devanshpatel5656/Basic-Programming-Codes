#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student() {
        name = "Devansh";
        age = 18;
    }
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};
int main() {
    Student student;
    student.displayDetails();
    return 0;
}
