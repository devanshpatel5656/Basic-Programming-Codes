#include<iostream>
using namespace std;
int change(int *a);
int main(){
	int x;
	cin>>x;
	cout<<"\nx="<<x;
	change(&x);
	cout<<"\nx="<<x;
	
	
	return 0;
}

int change(int *a){
	*a+=5;
	
}
/*
call by value
#include<iostream>
using namespace std;
int change(int a);
int main(){
	int x;
	cin>>x;
	cout<<"\nx="<<x;
	change(x);
	
	return 0;
}
int change(int a){
	a+=5;
	cout<<"\na="<<a;
	
}

*/
