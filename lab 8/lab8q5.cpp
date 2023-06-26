#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string brand;
    float price;
public:
    void setDetails(string b, float p) {
        brand = b;
        price = p;
    }
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Price: $" << price << endl;
    }
};
class Car : public Vehicle {
protected:
    string fuelType;
    int numDoors;
public:
    void setCarDetails(string ft, int nd) {
        fuelType = ft;
        numDoors = nd;
    }
    void displayCarDetails() {
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }
};
class SportsCar : public Car {
private:
    float topSpeed;
public:
    void setSportsCarDetails(float ts) {
        topSpeed = ts;
    }
    void displaySportsCarDetails() {
        cout << "Top Speed: " << topSpeed << " mph" << endl;
    }
};
int main() {
    SportsCar sportsCar;
    string brand, fuelType;
    float price, topSpeed;
    int numDoors;
    cout << "Enter the brand of the car: ";
    cin >> brand;
    cout << "Enter the price of the car: $";
    cin >> price;
    cout << "Enter the fuel type of the car: ";
    cin >> fuelType;
    cout << "Enter the number of doors of the car: ";
    cin >> numDoors;
    cout << "Enter the top speed of the sports car: ";
    cin >> topSpeed;
    sportsCar.setDetails(brand, price);
    sportsCar.setCarDetails(fuelType, numDoors);
    sportsCar.setSportsCarDetails(topSpeed);
    cout << "\nCar Details:\n";
    sportsCar.displayDetails();
    sportsCar.displayCarDetails();
    sportsCar.displaySportsCarDetails();
    return 0;
}
