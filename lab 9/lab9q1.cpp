#include <iostream>
using namespace std;
class Shape {
public:
    void area() {
        cout << "This is the area of the shape." << endl;
    }

    void area(int length, int width) {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
class Circle : public Shape {
public:
    void area(int radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};
int main() {
    Shape s;
    Circle c;
    s.area();               
    s.area(5, 6);         
    c.area(3);              
    return 0;
}

