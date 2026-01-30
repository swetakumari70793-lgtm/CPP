#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int isprime = true;
    if(n<=1)
    {
        isprime=false;
    }
    else
    {
        for(int i=2; i <= n/2; i++)
        {
            if(n % i==0)
            {
                isprime=false;
                break;
            }
        }
    }
    if(isprime)
    {
        cout<<"Prime Number\n";
    }
    else
    {
        cout<<"Not Prime Number\n";
    }
    return 0;

}