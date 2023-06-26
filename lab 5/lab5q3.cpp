#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    int c=a+b;
    return c;
}

inline int sub(int a,int b)
{
    int c=a-b;
    return c;
}

inline int mul(int a,int b)
{
    int c=a*b;
    return c;
}

inline float div(float a,float b)
{
    float c=a/b;
    return c;
}

int main()
{
    int n;
    float a,b,c;
    cout<<"select operation\n";
    cout<<"1.Addition\n 2.Subtraction\n 3.Multiplication\n 4. Division\n";
    cin>>n;
   
    switch(n)
    {
        case 1:
         cout<<"enter the values of a & b\n";
    cin>>a>>b;
        c=add(a,b);
        cout<<"sum="<<c;
        break;

        case 2:
         cout<<"enter the values of a & b\n";
    cin>>a>>b;
        c=sub(a,b);
        cout<<"difference"<<c;
        break;

        case 3:
         cout<<"enter the values of a & b\n";
    cin>>a>>b;
        c=mul(a,b);
        cout<<"product="<<c;
        break;

        case 4:
         cout<<"enter the values of a & b\n";
    cin>>a>>b;
        c=div(a,b);
        cout<<"quotient"<<c;
        break;

        default:
        cout<<"enter correct operation";
    }
    return 0;
    
}

