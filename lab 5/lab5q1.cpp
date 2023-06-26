#include<iostream>
using namespace std;
int swap(int *a,int *b);
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"\nx="<<x<<"y="<<y;
	swap(x,y);
	cout<<"\nx="<<x<<"y="<<y;
	
	return 0;
}

int swap(int *a,int *b){
	int *c;
	*c=*a;
	*a=*b;
	*b=*c;
}
/*
call by value

#include<iostream>
using namespace std;
int swap(int a,int b);
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"\nx="<<x<<"y="<<y;
	swap(x,y);
	
	return 0;
}

int swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\na="<<a<<"b="<<b;
	
}

*/
