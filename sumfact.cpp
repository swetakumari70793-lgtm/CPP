// factorial of all number from 1 to N which are divisble by 2.

#include<iostream>
using namespace std;
int main()
{
    int num , fact=1 , sum=0;
    cout<<"Enter Any Number: ";
    cin>>num;
    for(int i=1; i<=num; i++)
    { 
        fact*=i;
        if(fact % 2 == 0)
        {
            sum+=fact;
        }
    }
    cout<<"Sum of Factorial number "<<sum<<endl;
    cout<<"Factorial number "<<fact<<endl;
    return 0;
}