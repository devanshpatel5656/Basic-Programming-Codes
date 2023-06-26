#include <iostream>
using namespace std;
int main() {
    int alpha = 40, beta = 80, gamma = 20, delta = 50, theta = 30, zeta = 100;
    int addition = alpha + beta;
    int subtraction = delta - theta;
    int multiplication = gamma * zeta;
    int division = beta / alpha;
    int modulus = delta % theta;
    int increment = ++gamma;
    int decrement = --zeta;
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;
    cout << "Increment: " << increment << endl;
    cout << "Decrement: " << decrement << endl;
    return 0;
}

