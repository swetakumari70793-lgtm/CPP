#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    if((num%2==0)&&(num%3==0))
    {
        cout<<"Divisible by 2 And 3"<<endl;
    }
    else 
    {
        cout<<"Not Divisble by 2 and 3"<<endl;
    }
    return 0;
}