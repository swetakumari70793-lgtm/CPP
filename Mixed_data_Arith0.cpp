// Write a C++ program that displays mixed data types and arithmetic operations.


#include<iostream>
using namespace std;
int main()
{
    int m1 = 7 , m2 = 5;
    double d1 = 8.0 , d2 = 3.7;
    cout<<"\n\nDisplay mixed data type and arithematic operation \n";
    cout<<"______________________________________________________\n";

    cout<<" "<<m1<<" + "<<m2<<" = "<<m1+m2<<endl;
    cout<<" "<<d1<<" + "<<d2<<" = "<<d1+d2<<endl;
    cout<<" "<<d1<<" + "<<m2<<" = "<<d1+m2<<endl;

    cout<<" "<<m1<<" - "<<m2<<" = "<<m1-m2<<endl;
    cout<<" "<<d1<<" - "<<d2<<" = "<<d1-d2<<endl;
    cout<<" "<<d1<<" - "<<m2<<" = "<<d1-m2<<endl;

    cout<<" "<<m1<<" * "<<m2<<" = "<<m1*m2<<endl;
    cout<<" "<<d1<<" * "<<d2<<" = "<<d1*d2<<endl;
    cout<<" "<<d1<<" * "<<m2<<" = "<<d1*m2<<endl;


    cout<<" "<<m1<<" / "<<m2<<" = "<<m1/m2<<endl;
    cout<<" "<<d1<<" / "<<d2<<" = "<<d1/d2<<endl;
    cout<<" "<<d1<<" / "<<m2<<" = "<<d1/m2<<endl;
    
    return 0;

}