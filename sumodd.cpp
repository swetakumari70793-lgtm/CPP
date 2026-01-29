#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"Enter Any Number : ";
    cin>>num;
    for(int i=0; i<num; i++)
    {
        if(num%2!=0)
        {
            sum +=i;
            cout<<i<<endl;
        }
        cout<<"Sum is "<<sum<<endl;
    }
}