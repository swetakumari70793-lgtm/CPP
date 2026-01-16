#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter any choice ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"JANUARY"<<endl;
        break;

        case 2:
        cout<<"FEBRUARY"<<endl;
        break;

        case 3:
        cout<<"MARCH"<<endl;
        break;

        case 4:
        cout<<"APRIL"<<endl;
        break;

        case 5:
        cout<<"MAY"<<endl;
        break;

        case 6:
        cout<<"JUNE"<<endl;
        break;

        case 7:
        cout<<"JULY"<<endl;
        break;

        case 8:
        cout<<"AUGUST"<<endl;
        break;

        case 9:
        cout<<"SEPTEMBER"<<endl;
        break;

        case 10:
        cout<<"OCTOBER"<<endl;
        break;

        case 11:
        cout<<"NOVEMBER"<<endl;
        break;

        case 12:
        cout<<"DECEMBER"<<endl;
        break;
        
        default:
        cout<<"NOT OTHER NUMBER PRESS BETWEEN 1 TO 12"<<endl;
    }
    return 0;

}