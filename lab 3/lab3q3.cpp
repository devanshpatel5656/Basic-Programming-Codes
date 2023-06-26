#include <iostream>
using namespace std;
int main() {
    int alpha = 40, beta = 80, gamma = 20, delta = 50, theta = 30, zeta = 100;
    bool isEqual = (alpha == beta);
    bool isNotEqual = (gamma != delta);
    bool isGreater = (theta > alpha);
    bool isLess = (zeta < beta);
    bool isGreaterOrEqual = (delta >= gamma);
    bool isLessOrEqual = (theta <= zeta);
    cout << "Is Equal: " << isEqual << endl;
    cout << "Is Not Equal: " << isNotEqual << endl;
    cout << "Is Greater: " << isGreater << endl;
    cout << "Is Less: " << isLess << endl;
    cout << "Is Greater or Equal: " << isGreaterOrEqual << endl;
    cout << "Is Less or Equal: " << isLessOrEqual << endl;
    return 0;
}

