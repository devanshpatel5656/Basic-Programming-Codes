#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
float calculateAverage(int numbers[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum / size;
}
int main() {
    int numbers[MAX_SIZE];
    int size;
    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> size;
    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    float average = calculateAverage(numbers, size);
    cout << "Average: " << average << endl;
    return 0;
}

