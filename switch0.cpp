#include<iostream>
using namespace std;
int main()
{
    int ch , n;
    cout<<"1. Enter Even or Odd number"<<endl;
    cout<<"2. Enter Positive number"<<endl;
    cout<<"3. Enter Multiple of 5 number"<<endl;
    cout<<"Enter choice number: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Enter a number";
        cin>>n;
        if(n%2==0)
        {
            cout<<" Even number"<<endl;
        }
        else
        {
            cout<<" Odd number"<<endl;
        }
        break;

        case 2:
        cout<<"Enter a number:";
        cin>>n;
        if(n>=10 && n<100)
        {
            cout<<" Positive number"<<endl;
        }
        else
        {
            cout<<" Not Positive number"<<endl;
        }
        break;

        case 3:
        cout<<"Enter a number:";
        cin>>n;
        if(n%5==0)
        {
            cout<<" Multiple number of 5"<<endl;
        }
        else
        {
            cout<<" Not Multiple number of 5"<<endl;
        }
        break;

        default:
        {
            cout<<"Not vaild number"<<endl;
        }
    }
    return 0;
}