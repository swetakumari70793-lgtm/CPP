// sum of all number from 1 to N which is divisble by not equle to 2.
#include<iostream>
using namespace std;
int main()
{
    int num , sum=0;
    cout<<"Enter Number : ";
    cin>> num;
    for(int i=1; i<=num; i++)
    {
        if(i % 2 != 0)
        {
            sum+=i;
        }
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}