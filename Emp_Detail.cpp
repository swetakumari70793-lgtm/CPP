#include<iostream>
using namespace std;
int main()
{
    string n, c, id;
    long mob_NO;
    float HRA,TA,MA,DA,PF,Ins;
    double NT,GS,BS;
    cout<<"Employee Name : ";
    cin>>n;

    cout<<"\nEmployee City : ";
    cin>>c;

    cout<<"\nEmployee ID : ";
    cin>>id;

    cout<<"\nEmployee Basic_Salary : ";
    cin>>BS;

    HRA=BS*11.3/100;
    DA=BS*8.5/100;
    MA=BS*4.3/100;
    TA=BS*3.9/100;
    PF=BS*7.3/100;
    Ins=BS*3.2/100;

    GS=BS+HRA+DA+MA+TA;

    NT=GS-PF-Ins;

    cout<<"\n============================================"<<endl;

    cout<<"Employee Name : "<<n<<endl;
    cout<<"Employee City : "<<c<<endl;
    cout<<"Employee ID : "<<id<<endl;
    cout<<"Employee Basic_Salary : "<<BS<<endl;

    cout<<"\n======================================"<<endl;

    cout<<"HRA : "<<HRA<<endl;
    cout<<"DA : "<<DA<<endl;
    cout<<"MA : "<<MA<<endl;
    cout<<"TA : "<<TA<<endl;
    cout<<"PF : "<<PF<<endl;
    cout<<"INSURENCE : "<<Ins<<endl;

    cout<<"\n======================================"<<endl;

    cout<<"Gross_Salary : "<<GS<<endl;
    cout<<"Net_Salary : "<<NT<<endl;
    return 0;
}