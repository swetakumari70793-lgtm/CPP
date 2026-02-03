#include<iostream>
using namespace std;
int main()
{
    int a , b , sum , sub , mul , div , mod;
    
    cout<<"Enter Integer value 1st  ";
    cin>>a;
    cout<<"Enter Integer value 2nd  ";
    cin>>b;

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    cout<<"Sum Integer value is "<<sum<<endl;
    cout<<"Substract Integer value is "<<sub<<endl;
    cout<<"Multiply Integer value is "<<mul<<endl;
    cout<<"Divide Integer value is "<<div<<endl;
    cout<<"Remainder Integer value is "<<mod<<endl;

    return 0;
}