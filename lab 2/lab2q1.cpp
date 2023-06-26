#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverseWords(string& sentence) {
    reverse(sentence.begin(), sentence.end()); 
    size_t start = 0;
    size_t end = sentence.find(' ');
    while (end != string::npos) {
        reverse(sentence.begin() + start, sentence.begin() + end); 
        start = end + 1;
        end = sentence.find(' ', start);
    }
    reverse(sentence.begin() + start, sentence.end()); 
}
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    reverseWords(sentence);
    cout << "Reversed sentence: " << sentence << endl;
    return 0;
}

