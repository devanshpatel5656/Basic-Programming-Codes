#include <iostream>
#include <cstring>
using namespace std;
void concatenateStrings(const char* str1, const char* str2) {
    char result[100];
    strcpy(result, str1);
    strcat(result, str2);
    cout << "Concatenated string: " << result << endl;
}
int getStringLength(const char* str) {
    return strlen(str);
}
void copyString(const char* source, char* destination) {
    strcpy(destination, source);
    cout << "Copied string: " << destination << endl;
}
void reverseString(const char* str) {
    int length = strlen(str);
    char result[100];
    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        result[j] = str[i];
    }
    result[length] = '\0';
    cout << "Reversed string: " << result << endl;
}
bool compareStrings(const char* str1, const char* str2) {
    int result = strcmp(str1, str2);
    return result == 0;
}
int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    concatenateStrings(str1, str2);
    int length = getStringLength(str1);
    cout << "Length of string 1: " << length << endl;
    char destination[100];
    copyString(str2, destination);
    reverseString(str1);
    bool isEqual = compareStrings(str1, str2);
    cout << "Are the strings equal? " << (isEqual ? "Yes" : "No") << endl;
    return 0;
}

