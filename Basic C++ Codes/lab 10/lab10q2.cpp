#include <iostream>
using namespace std;
template<typename T>
double average(T arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += static_cast<double>(arr[i]);
    }
    return sum / size;
}
int main() {
    const int SIZE = 5;
    int intArr[SIZE];
    double doubleArr[SIZE];
    cout << "Enter " << SIZE << " integer numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> intArr[i];
    }
    cout << "Average (int): " << average(intArr, SIZE) << endl;
    cout << "Enter " << SIZE << " double numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> doubleArr[i];
    }
    cout << "Average (double): " << average(doubleArr, SIZE) << endl;
    return 0;
}

