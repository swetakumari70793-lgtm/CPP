#include<iostream>
using namespace std;
int main()
{
    string name, city;
    int roll ,p,c,b,h,e;
    float total,avg;
    cout<<"Enter Student Name  ";
    cin>>name;
    cout<<"Enter Student City Name  ";
    cin>>city;
    cout<<"Enter Student Roll  ";
    cin>>roll;
    cout<<"Enter Five Subject Marks  ";
    cin>>p>>c>>b>>h>>e;
    total=p+c+b+h+e;
    avg= total/5;

    cout<<"Student Name - "<<name<<endl;
    
    cout<<"Student City Name - "<<city<<endl;
    
    cout<<"Student Roll - "<<roll<<endl;
    
    cout<<"Physics Marks - "<<p<<endl;

    cout<<"Chemistry Marks - "<<c<<endl;

    cout<<"Biology Marks - "<<b<<endl;

    cout<<"Hindi Marks - "<<h<<endl;

    cout<<"English Marks - "<<e<<endl;

    cout<<"Total Marks - "<<total<<endl;

    cout<<"Percentage - "<<avg<<endl;
}