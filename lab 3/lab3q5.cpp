#include <iostream>
using namespace std;
int main() {
    int alpha = 40, beta = 80, gamma = 20, delta = 50, theta = 30, zeta = 100;
    int bitwiseAnd = alpha & gamma;
    int bitwiseOr = beta | delta;
    int bitwiseXor = theta ^ zeta;
    int bitwiseNotAlpha = ~alpha;
    int bitwiseLeftShift = gamma << 2;
    int bitwiseRightShift = zeta >> 1;
    cout << "Bitwise AND: " << bitwiseAnd << endl;
    cout << "Bitwise OR: " << bitwiseOr << endl;
    cout << "Bitwise XOR: " << bitwiseXor << endl;
    cout << "Bitwise NOT (Alpha): " << bitwiseNotAlpha << endl;
    cout << "Bitwise Left Shift: " << bitwiseLeftShift << endl;
    cout << "Bitwise Right Shift: " << bitwiseRightShift << endl;
    return 0;
}

