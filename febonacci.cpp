#include<iostream>
using namespace std;
int main()
{
    int a=0 , b=1 , c , n ;
    cout<<"Number is ";
    cin>>n;
    cout<<"Febonacci Series : ";
    for(int i=1; i<=n; i++)
    { 
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}