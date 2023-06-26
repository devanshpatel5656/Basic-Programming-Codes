#include <iostream>
using namespace std;
class Triangle {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
    void displayPerimeter() {
        cout << "Perimeter of the triangle: " << calculatePerimeter() << endl;
    }
};
int main() {
    double side1, side2, side3;
    cout << "Enter the length of side 1: ";
    cin >> side1;
    cout << "Enter the length of side 2: ";
    cin >> side2;
    cout << "Enter the length of side 3: ";
    cin >> side3;
    Triangle triangle(side1, side2, side3);
    triangle.displayPerimeter();
    return 0;
}
