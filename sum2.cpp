// sum of all number from 1 to N which are divisible by 5.

#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter value : ";
    cin>>N;

    int m = N / 5;
    int sum = 5 * m * (m + 1)/2;
    cout<<"sum "<<sum<<endl;
    return 0;
    
}
