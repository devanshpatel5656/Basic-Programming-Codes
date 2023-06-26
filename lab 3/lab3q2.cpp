#include <iostream>
using namespace std;
int main() {
    int alpha = 40, beta = 80, gamma = 20, delta = 50, theta = 30, zeta = 100;
    alpha += beta;
    gamma -= delta;
    theta *= zeta;
    beta /= gamma;
    delta %= theta;
    cout << "Alpha: " << alpha << endl;
    cout << "Gamma: " << gamma << endl;
    cout << "Theta: " << theta << endl;
    cout << "Beta: " << beta << endl;
    cout << "Delta: " << delta << endl;
    return 0;
}

