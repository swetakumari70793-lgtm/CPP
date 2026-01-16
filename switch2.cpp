#include<iostream>
using namespace std;
int main()
{
    int N1,N2,ADD,SUB,MUL,DIV,REM,CH;
    cout<<"Enter any two number ";
    cin>>N1>>N2;
    cout<<"Enter any choice ";
    cin>>CH;
    switch(CH)
    {
        case 1:
        ADD=N1+N2;
        cout<<"Addition is - "<<ADD<<endl;
        break;

        case 2:
        SUB=N1-N2;
        cout<<"Subtraction is - "<<SUB<<endl;
        break;

        case 3:
        MUL=N1*N2;
        cout<<"Multiply is - "<<MUL<<endl;
        break;

        case 4:
        DIV=N1/N2;
        cout<<"Division is - "<<DIV<<endl;
        break;

        case 5:
        REM=N1%N2;
        cout<<"Remainder is - "<<REM<<endl;
        break;

        default:
        cout<<"PLEASE ENTER CHOICE BETWEEN 1 TO 5"<<endl;
    }
    return 0;
}