#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() {
        cout << "Area calculation is not defined for the base shape." << endl;
    }
};
class Rectangle : public Shape {
public:
    void calculateArea() override {
        cout << "Calculating area of the rectangle." << endl;
    }
};
class Triangle : public Shape {
public:
    void calculateArea() override {
        cout << "Calculating area of the triangle." << endl;
    }
};
class Color {
protected:
    string color;
public:
    void setColor(string c) {
        color = c;
    }
};
class ColoredRectangle : public Rectangle, public Color {
public:
    void displayColor() {
        cout << "Color: " << color << endl;
    }
};
int main() {
    ColoredRectangle coloredRectangle;
    coloredRectangle.setColor("Red");
    coloredRectangle.displayColor();
    coloredRectangle.calculateArea();
    return 0;
}
