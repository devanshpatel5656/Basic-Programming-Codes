#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
    float calculateArea() {
        return length * width;
    }
    void displayArea() {
        cout << "Area of the rectangle: " << calculateArea() << " square units" << endl;
    }
};
int main() {
    Rectangle rectangle;
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rectangle.setDimensions(length, width);
    rectangle.displayArea();
    return 0;
}
