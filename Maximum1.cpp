#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4,max;
    cout<<"Enter Four Number N1,N2,N3 & N4 : ";
    cin>>n1>>n2>>n3>>n4;
    if(n1>n2)
    if(n1>n3)
    if(n1>n4)
    {
        max=n1;
    }
    else
    {
        max=n4;
    }
    else
    {
        if(n3>n4)
        {
            max=n3;
        }
        else
        {
            max=n4;
        }
    else
    {
        if(n2>n3)
        if(n2>n4)
        {
            max=n2;
        }
        else
        {
            max=n4;
        }
    else
    {
        if(n3>n4)
        {
            max=n3;
        }
       else
        {
           max=n4;
        }
    }
    }
    }
    cout<<"Maximum number is - "<<max<<endl;
    return 0;
}