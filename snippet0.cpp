#include<iostream>
using namespace std;
int main()
{
    int x , y ;
    cout<<"Y is ";
    cin>>y;
    cout<<"X is ";
    cin>>x;
    if(y % x == 10)
    {
        cout<<"Good " << y << endl ;
    }
    else if(y - x == 30)
    {
        cout<<"Natural " << y << endl ;
    }
    else
    {
        cout<<"Bad " << y << endl;
    }
    return 0;
}