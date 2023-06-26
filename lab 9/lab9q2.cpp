#include <iostream>
using namespace std;
class MyClass {
private:
    int value;
public:
    MyClass(int v) {
        value = v;
    }
    friend void displayValue(MyClass obj);
};
void displayValue(MyClass obj) {
    cout << "The value is: " << obj.value << endl;
}
int main() {
    MyClass obj(5);
    displayValue(obj);
    return 0;
}

