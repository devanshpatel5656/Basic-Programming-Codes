#include <iostream>
using namespace std;
int* findLargest(int* arr, int size) {
    int* max = arr;
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }
    return max;
}
int* findSmallest(int* arr, int size) {
    int* min = arr;
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }
    }
    return min;
}
int main() {
    int arr[] = { 5, 2, 9, 1, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int* largest = findLargest(arr, size);
    int* smallest = findSmallest(arr, size);
    cout << "Largest element: " << *largest << endl;
    cout << "Smallest element: " << *smallest << endl;
    return 0;
}

