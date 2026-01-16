#include<iostream>
using namespace std;
int main()
{
    string An, Cn;
    int Ap;
    float dis ,TP;
    cout<<"Article Name : ";
    cin>>An;
    cout<<"Article Customer Name : ";
    cin>>Cn;
    cout<<"Article Price : ";
    cin>>Ap;
    dis=Ap*40/100;
    TP=Ap-dis;
    cout<<"Article Name - "<<An<<endl;
    cout<<"Article  Customer Name - "<<Cn<<endl;
    cout<<"Article Price - "<<Ap<<endl;
    cout<<"Discount Price - "<<dis<<endl;
    cout<<"Total Payable Amount of Article - "<<TP<<endl;
    return 0;
}