#include <iostream>
#include <stdexcept>
using namespace std;
double divideNumbers(int dividend, int divisor) {
    if (divisor == 0) {
        throw runtime_error("Division by zero error");
    }
    return static_cast<double>(dividend) / divisor;
}
int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    try {
        double result = divideNumbers(dividend, divisor);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}

