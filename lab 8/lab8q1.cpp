#include <iostream>
using namespace std;
class Shape {
protected:
    double width;
    double height;
public:
    Shape(double w, double h) {
        width = w;
        height = h;
    }
};
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double getArea() {
        return width * height;
    }
};
int main() {
    double width, height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    Rectangle rectangle(width, height);
    double area = rectangle.getArea();
    cout << "Area of the rectangle: " << area << endl;
    return 0;
}
