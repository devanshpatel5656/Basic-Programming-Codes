#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
    string gender;
public:
    void setDetails(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class Student : public Person {
private:
    int rollNumber;
    string grade;
public:
    void setStudentDetails(int roll, string g) {
        rollNumber = roll;
        grade = g;
    }
    void displayStudentDetails() {
        displayDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student student;
    string name, gender;
    int age, rollNumber;
    string grade;
    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the student's age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the student's gender: ";
    getline(cin, gender);
    cout << "Enter the student's roll number: ";
    cin >> rollNumber;
    cin.ignore();
    cout << "Enter the student's grade: ";
    getline(cin, grade);
    student.setDetails(name, age, gender);
    student.setStudentDetails(rollNumber, grade);
    cout << "\nStudent Details:\n";
    student.displayStudentDetails();
    return 0;
}
