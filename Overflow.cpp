//Write a C++ program to check overflow/underflow during various arithmetic operations.

#include<iostream>
using namespace std;
int main()
{
    int n1 = 2147483647;
    int n2 = -2147483648;
    cout<<"\n\nCheck overflow/underflow during various arithmetic operations \n";
    cout<<"Range of it [2147483647 to -2147483648] "<<endl;
    cout<<"----------------------------------------------------------------------\n";

    cout<<"Underflow the range and set in minimum range : "<<n1+1<<endl;
    cout<<"Increasing from its minimum range :"<<n1+2<<endl;
    cout<<"Product "<<n1*n1<<endl;

    cout<<"Underflow the range and set in maximum range : "<<n2-1<<endl;
    cout<<"Increasing from its maximum range :"<<n2-2<<endl;
    cout<<"Product "<<n2*n2<<endl;

    cout<<endl;
    return 0;

}