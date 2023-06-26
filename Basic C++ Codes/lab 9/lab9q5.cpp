#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    Student(const Student& other) {
        name = other.name;
        age = other.age;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    Student s1("John", 20);
    Student s2 = s1;
    s1.displayInfo();
    s2.displayInfo();
    return 0;
}

