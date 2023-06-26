#include <iostream>
using namespace std;
class Animal {
protected:
    string name;
    string type;
public:
    void setDetails(string n, string t) {
        name = n;
        type = t;
    }
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Type: " << type << endl;
    }
};
class FlyingAnimal {
protected:
    int flightSpeed;
public:
    void setFlightSpeed(int speed) {
        flightSpeed = speed;
    }
    void displayFlightSpeed() {
        cout << "Flight Speed: " << flightSpeed << " km/h" << endl;
    }
};
class Bird : public Animal, public FlyingAnimal {
public:
    void displayBirdDetails() {
        cout << "--- Bird Details ---" << endl;
        displayDetails();
        displayFlightSpeed();
    }
};
int main() {
    Bird bird;
    bird.setDetails("Eagle", "Bird");
    bird.setFlightSpeed(100);
    bird.displayBirdDetails();
    return 0;
}
