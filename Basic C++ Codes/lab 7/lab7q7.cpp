#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    string model;
public:
    Car(string b, string m) {
        brand = b;
        model = m;
    }
    void displayDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
    }
};
int main() {
    string brand, model;
    cout << "Enter the car brand: ";
    getline(cin, brand);
    cout << "Enter the car model: ";
    getline(cin, model);
    Car car(brand, model);
    car.displayDetails();
    return 0;
}
