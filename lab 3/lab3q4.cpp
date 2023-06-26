#include <iostream>
using namespace std;
int main() {
    int alpha = 40, beta = 80, gamma = 20, delta = 50, theta = 30, zeta = 100;
    bool logicalAnd = (alpha > gamma) && (delta < zeta);
    bool logicalOr = (beta >= theta) || (gamma != delta);
    bool logicalNotAlpha = !(alpha > theta);
    bool logicalNotBeta = !(beta < zeta);
    cout << "Logical AND: " << logicalAnd << endl;
    cout << "Logical OR: " << logicalOr << endl;
    cout << "Logical NOT (Alpha): " << logicalNotAlpha << endl;
    cout << "Logical NOT (Beta): " << logicalNotBeta << endl;
    return 0;
}

