#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNo;
    string name;
    int age;
    float marks;
};
void printStudentDetails(Student student) {
    cout << "Roll No.: " << student.rollNo << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;
}
int main() {
    Student student;
	cout << "Enter Roll No.: ";
    cin >> student.rollNo;
    cin.ignore(); 
	cout << "Enter Name: ";
    getline(cin, student.name);
    cout << "Enter Age: ";
    cin >> student.age;
    cout << "Enter Marks: ";
    cin >> student.marks;
    cout << "\nStudent Details:\n";
    printStudentDetails(student);
    return 0;
}

