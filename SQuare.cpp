#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"Enter length : ";
    cin>>l;
    cout<<"Enter breadth : ";
    cin>>b;
    if(l==b)
    {
        cout<<"It is a square"<<endl;
    }
    else
    {
        cout<<"It is not square"<<endl;
    }
    return 0;
}