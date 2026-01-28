#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Any Marks : ";
    cin>>marks;

    if(marks>80)
    {
       cout<<"Gracefully "<<endl;
    }
    else if(marks>33)
    {
      cout<<"Pass "<<endl;
    }
    else
    {
       cout<<"Fail "<<endl;
    }
    return 0;

}