#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    float price;
public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};
int main() {
    string title, author;
    float price;
    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);
    cout << "Enter the price of the book: $";
    cin >> price;
    cin.ignore();
    Book book(title, author, price);
    book.displayDetails();
    return 0;
}
