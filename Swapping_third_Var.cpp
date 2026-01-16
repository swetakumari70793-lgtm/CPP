#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter A value ";
    cin>>a;
    cout<<"Enter b value ";
    cin>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<"\n Before Swapping value of A "<<b<<" and "<< " B "<<a<<endl;
    cout<<"\n a - "<<a<<endl;
    cout<<"\n b - "<<b<<endl;
    cout<<"\n After Swapping value of "<<" A - "<<a<<" and "<<" B - "<<b<<endl;
    return 0;
}