#include <iostream>
using namespace std;
class Circle {
private:
    float radius;
    float area;
public:
    Circle(float r) {
        radius = r;
        area = 3.14 * radius * radius;
    }
    void displayArea() {
        cout << "Area of the circle: " << area << " square units" << endl;
    }
};
int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    circle.displayArea();
    return 0;
}
