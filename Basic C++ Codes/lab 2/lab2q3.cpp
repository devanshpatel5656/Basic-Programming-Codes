#include <iostream>
using namespace std;
bool isAlphabetOrNumber(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    } else {
        return false;
    }
}
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isAlphabetOrNumber(ch)) {
        cout << ch << " is an alphabet or number." << endl;
    } else {
        cout << ch << " is not an alphabet or number." << endl;
    }
    return 0;
}

