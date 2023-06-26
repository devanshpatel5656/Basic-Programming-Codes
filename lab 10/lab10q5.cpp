#include <iostream>
#include <stdexcept>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setAge(int newAge);
    void setName(const string& newName);
    void displayInfo();
};

void Student::setAge(int newAge) {
    if (newAge < 18 || newAge > 30) {
        throw out_of_range("Invalid age. Age must be between 18 and 30.");
    }
    age = newAge;
}

void Student::setName(const string& newName) {
    name = newName;
}

void Student::displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Student student;
    string name;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;
    cin.ignore();

    try {
        student.setName(name);
        student.setAge(age);
        student.displayInfo();
    } catch (const out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
        return 1;
    }

    return 0;
}

