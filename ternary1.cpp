#include<iostream>
using namespace std;
int main()
{
    int Num;
    cout<<"Enter number ";
    cin>>Num;
    ((Num % 3 == 0) || (Num % 5 == 0)) ? cout<<"Number is divisible by 3 & 5:"<<Num<<endl : cout<<"Number is not divisible by 3 & 5: "<<Num<<endl ;
    return 0;

}