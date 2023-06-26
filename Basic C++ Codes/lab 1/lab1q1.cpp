#include <iostream>

using namespace std;

int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int sum = calculateSum(num1, num2);

    cout << "The sum is: " << sum << endl;

    return 0;
}

