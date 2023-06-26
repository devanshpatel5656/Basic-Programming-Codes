#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
int findLargestElement(int numbers[], int size) {
    int largest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
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
    int largest = findLargestElement(numbers, size);
    cout << "Largest element: " << largest << endl;
    return 0;
}

