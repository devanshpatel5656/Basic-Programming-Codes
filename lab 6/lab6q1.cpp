#include<iostream>
using namespace std;
class MyClass {     
  public:            
int rollno;
	int phone;
	string address;  
};
int main() {
  MyClass mary,adam;  
 mary.rollno = 1; 
  mary.phone=1243354215;
  mary.address="china";
  adam.rollno = 2; 
  adam.phone=5786357824;
  adam.address="japan";
  cout << mary.rollno<< "\n";
  cout << mary.phone<< "\n";
  cout << mary.address<< "\n";
 cout << "\n"<<adam.rollno<< "\n";
  cout << adam.phone<< "\n";
  cout << adam.address<< "\n";
  return 0;
}


