#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age  ";
    cin>>age;
    (age>=18) ? cout<<"Eligible for vote : "<<age<<endl : cout<<"Not Eligible for vote : "<<age<<endl ;
    return 0;

}