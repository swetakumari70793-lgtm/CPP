#include<iostream>
using namespace std;
int main()
{
    int r;
    float d,c,a;
    cout<<"Enter Radius : ";
    cin>>r;
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    cout<<"Area - "<<a<<" Diameter - "<<d<<" Circumfarence - "<<c<<endl;
}