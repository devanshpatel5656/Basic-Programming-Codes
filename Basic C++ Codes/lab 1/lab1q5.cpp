#include <iostream>
#include <string>
using namespace std;
struct Marks {
    int rollNo;
    string name;
    float chemMarks;
    float mathsMarks;
    float phyMarks;
    float percentage; // Added member variable
};
void calculatePercentage(Marks& student) {
    float totalMarks = student.chemMarks + student.mathsMarks + student.phyMarks;
    float percentage = (totalMarks / 300) * 100;
    student.percentage = percentage;
}
void displayStudentDetails(Marks student) {
    cout << "Roll No.: " << student.rollNo << endl;
    cout << "Name: " << student.name << endl;
    cout << "Chemistry Marks: " << student.chemMarks << endl;
    cout << "Mathematics Marks: " << student.mathsMarks << endl;
    cout << "Physics Marks: " << student.phyMarks << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;
    cout << endl;
}
int main() {
    Marks students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Roll No.: ";
        cin >> students[i].rollNo;
        cin.ignore(); 
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Chemistry Marks: ";
        cin >> students[i].chemMarks;
        cout << "Mathematics Marks: ";
        cin >> students[i].mathsMarks;
        cout << "Physics Marks: ";
        cin >> students[i].phyMarks;
        calculatePercentage(students[i]);
        cout << endl;
    }
    cout << "Student Details:\n";
    for (int i = 0; i < 5; i++) {
        displayStudentDetails(students[i]);
    }
    return 0;
}

