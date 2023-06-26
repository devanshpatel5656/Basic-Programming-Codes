#include <iostream>
#include <stdexcept>

using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed");
    }
    return a / b;
}

int main() {
    int dividend, divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    try {
        int result = divide(dividend, divisor);
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
       cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

