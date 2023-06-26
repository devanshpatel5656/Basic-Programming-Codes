#include <iostream>
using namespace std;
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
    void stop() {
        cout << "Vehicle stopped." << endl;
    }
};

class Car : public Vehicle {
public:
    void carSpecificFunction() {
        cout << "Performing car-specific function." << endl;
    }
};
class Motorcycle : public Vehicle {
public:
    void motorcycleSpecificFunction() {
        cout << "Performing motorcycle-specific function." << endl;
    }
};
int main() {
    Car myCar;
    myCar.start();
    myCar.carSpecificFunction();
    myCar.stop();
    cout << endl;
    Motorcycle myMotorcycle;
    myMotorcycle.start();
    myMotorcycle.motorcycleSpecificFunction();
    myMotorcycle.stop();
    return 0;
}
