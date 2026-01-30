#include<iostream>
using namespace std;
int main()
{
    int num;
    bool isprime = true;
    cout<<"Enter value : ";
    cin>>num;
    for(int i=2; i*i<=num; i++)
    {
        if(num % i == 0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==true)
    {
        cout<<"Prime number\n";
    }
    else
    {
        cout<<"Not Prime number";
    }
    return 0;

}