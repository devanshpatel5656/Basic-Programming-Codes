#include <iostream>
#include <algorithm>
using namespace std;
float calculateMean(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return static_cast<float>(sum) / size;
}
float calculateMedian(int array[], int size) {
    sort(array, array + size);
    if (size % 2 == 0) {
        return static_cast<float>(array[size / 2 - 1] + array[size / 2]) / 2;
    } else {
        return array[size / 2];
    }
}
int calculateMode(int array[], int size) {
    int mode = array[0];
    int maxCount = 1;
    int count = 1;
    int currentElement = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] == currentElement) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                mode = currentElement;
            }
            count = 1;
            currentElement = array[i];
        }
    }
    return mode;
}
int main() {
    const int size = 10;
    int array[size];
    cout << "Enter 10 array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    float mean = calculateMean(array, size);
    float median = calculateMedian(array, size);
    int mode = calculateMode(array, size);
    cout << "Mean: " << mean << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;
    return 0;
}

