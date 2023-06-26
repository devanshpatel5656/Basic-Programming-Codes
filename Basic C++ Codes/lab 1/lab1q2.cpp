#include <iostream>
using namespace std;
int findMaximum(int a, int b, int c) {
    int maxNum = a;
    if (b > maxNum)
        maxNum = b;
    if (c > maxNum)
        maxNum = c;
    return maxNum;
}
int findMinimum(int a, int b, int c) {
    int minNum = a;
    if (b < minNum)
        minNum = b;
    if (c < minNum)
        minNum = c;
    return minNum;
}
int main() {
    int num1, num2, num3;
	cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
	int maximum = findMaximum(num1, num2, num3);
    int minimum = findMinimum(num1, num2, num3);
	cout << "Maximum number: " << maximum << endl;
    cout << "Minimum number: " << minimum << endl;
	return 0;
}

