#include<iostream>
using namespace std;
int main()
{
    int N;
    int sum=0;
    cout<<"Enter Any number : ";
    cin>>N;
    for(int i=0; i<=N;i++)
    {
        sum=sum+i;
        cout<<i<<endl;
        cout<<"Sum is  "<<sum<<endl;
    }
    return 0;
}