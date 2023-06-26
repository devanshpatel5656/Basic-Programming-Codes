#include <iostream>
#include <string>
using namespace std;
class Shape {
protected:
    float width;
    float height;
public:
    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }
    void displayDimensions() {
        cout << "Width: " << width << " units" << endl;
        cout << "Height: " << height << " units" << endl;
    }
};
class Color {
protected:
    string color;
public:
    void setColor(string c) {
        color = c;
    }
    void displayColor() {
        cout << "Color: " << color << endl;
    }
};
class Rectangle : public Shape, public Color {
public:
    void calculateArea() {
        float area = width * height;
        cout << "Area: " << area << " square units" << endl;
    }
};
int main() {
    Rectangle rectangle;
    float width, height;
    string color;
    cout << "Enter the dimensions of the rectangle:\n";
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    cin.ignore();
    cout << "Enter the color of the rectangle: ";
    getline(cin, color);
    rectangle.setDimensions(width, height);
    rectangle.setColor(color);
    cout << "\nRectangle Details:\n";
    rectangle.displayDimensions();
    rectangle.displayColor();
    rectangle.calculateArea();
    return 0;
}
