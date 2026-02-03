#include<iostream>
using namespace std;
int main()
{
    int l , b , per;
    cout<<"Enter Length  ";
    cin>>l;
    cout<<"Enter Breadth ";
    cin>>b;
    per = 2 * (l + b);
    cout<<"Perimeter of Rectangle is "<<per<<endl;
    return 0;
}