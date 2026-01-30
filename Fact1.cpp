// factorial of all number from 1 to N which are divisble by 2.

#include<iostream>
using namespace std;
int main()
{
    int num , fact=1;
    cout<<"Enter Any Number: ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        if(i % 2 == 0)
        {
            fact*=i;
        }
    }
    cout<<"Factorial number "<< fact<<endl;
    return 0;
}