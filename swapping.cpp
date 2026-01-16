#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A value ";
    cin>>a;
    cout<<"Enter b value ";
    cin>>b;
    
    cout<<"\nBefore Swapping value of A "<<b<<" and "<< " B "<<a<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swapping value of "<<" A - "<<a<<" and "<<" B - "<<b<<endl;
    return 0;
}