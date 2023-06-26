#include <iostream>
using namespace std;
int add(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;
    return 0;
}

