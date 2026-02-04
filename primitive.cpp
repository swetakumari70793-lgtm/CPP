// Write a C++ program that checks whether primitive values cross the limit.

#include<iostream>
using namespace std;
int main()
{
    char gender = 'F';
    bool isEmployed = true;
    unsigned short numOfsons = 2;
    short yearOfappt = 2006;
    unsigned int yearlyPackage = 1500000;
    double height = 79.48;
    float gpa = 8.96f;
    long totalDrawan = 12047235L;
    long long balance = 995324987LL;

    cout<<"\n\nChecked whether primitive value cross the limit \n";
    cout<<"____________________________________________________\n\n";

    cout<<"The gender is            "<<gender<<endl;
    cout<<"Is he married            "<<isEmployed<<endl;
    cout<<"Number of son he has     "<<numOfsons<<endl;
    cout<<"Year of his appointment  "<<yearOfappt<<endl;
    cout<<"Salary of year           "<<yearlyPackage<<endl;
    cout<<"Height is                "<<height<<endl;
    cout<<"GPA is                   "<<gpa<<endl;
    cout<<"Salary drawn up to       "<<totalDrawan<<endl;
    cout<<"Balance till             "<<balance<<endl;
    cout<<endl;
    return 0; 
}