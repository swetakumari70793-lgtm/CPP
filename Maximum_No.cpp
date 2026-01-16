#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter Three Number N1 , N2 & N3 : ";
    cin>>n1>>n2>>n3;
    if(n1>n2)
    if(n1>n3)
    {
        cout<<"n1 is Maximum number - "<<n1<<endl;
    }
    else
    {
        cout<<"n3 is maximum number - "<<n3<<endl;
    }
    else
    {
    if(n2>n3)
    {
        cout<<"n2 is maximum number - "<<n2<<endl;
    }
    else
    {
      cout<<"n3 is maximum number - "<<n3<<endl;  
    }
    }
    return 0;
}