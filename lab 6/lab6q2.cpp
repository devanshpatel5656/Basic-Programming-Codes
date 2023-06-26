#include<iostream>
using namespace std;

void area(int b,int h);
void perimeter(int a,int b,int c);

class triangle {     
  public:
  	
    void area(int b,int h){
    	cout<<"\n"<<"area="<<((b*h)/2);
	}
	void perimeter(int a,int b,int c){
		cout<<"\n"<<"perimeter="<<a+b+c;
	} 
};

int main() {
  triangle obj;
  
  obj.area(3,4);
  obj.perimeter(3,4,5);
  return 0;
}
