#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    Person() {
        name = "Unknown";
        age = 0;
}
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Person person;
    string name;
    int age;
    cout << "Enter the person's name: ";
    getline(cin, name);
    cout << "Enter the person's age: ";
    cin >> age;
    person.setDetails(name, age);
    person.displayDetails();
    return 0;
}
