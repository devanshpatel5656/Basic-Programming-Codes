#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double width;
    double height;
public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
    void displayDimensions() {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};
class Rectangle : public Shape {
public:
    double calculateArea() {
        return width * height;
    }
    double calculatePerimeter() {
        return 2 * (width + height);
    }
};
class Triangle : public Shape {
public:
    double calculateArea() {
        return 0.5 * width * height;
    }
    double calculatePerimeter() {
        double hypotenuse = sqrt((width * width) + (height * height));
        return width + height + hypotenuse;
    }
};
class Circle : public Shape {
public:
    double calculateArea() {
        return 3.14159 * pow((width / 2), 2);
    }
    double calculatePerimeter() {
        return 2 * 3.14159 * (width / 2);
    }
};
int main() {
    Rectangle rectangle;
    rectangle.setDimensions(5, 8);
    rectangle.displayDimensions();
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;
    cout << endl;
    Triangle triangle;
    triangle.setDimensions(4, 6);
    triangle.displayDimensions();
    cout << "Triangle Area: " << triangle.calculateArea() << endl;
    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << endl;
    cout << endl;
    Circle circle;
    circle.setDimensions(6, 0);
    circle.displayDimensions();
    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Circle Circumference: " << circle.calculatePerimeter() << endl;
    return 0;
}
