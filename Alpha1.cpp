#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Character : ";
    cin>>ch;
    if(ch>=65 && ch<=95)
    {
        cout<<"Uppercase "<<endl;
    }
    else
    {
        cout<<"Lowercase "<<endl;
    }
    return 0;
    
}