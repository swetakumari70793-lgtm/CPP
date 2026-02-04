//Write a in C++ program to find the size of fundamental data types.

#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\n\tFUNDAMENTAL DATA TPYES  :\n";
    cout<<"_________________________________________\n";
    cout<<"The Size of (Integer)       :  "<<sizeof(int)<<"bytes"<<endl;
    cout<<"The Size of (Character)     :  "<<sizeof(char)<<"bytes"<<endl;
    cout<<"The Size of (Float)         :  "<<sizeof(float)<<"bytes"<<endl;
    cout<<"The Size of (Double)        :  "<<sizeof(double)<<"bytes"<<endl;
    cout<<"The Size of (Long)          :  "<<sizeof(long)<<"bytes"<<endl;
    cout<<"The Size of (short)         :  "<<sizeof(short)<<"bytes"<<endl;
    cout<<"The Size of (Long Long)     :  "<<sizeof(long long)<<"bytes"<<endl;
    cout<<"The Size of (Long Double)   :  "<<sizeof(long double)<<"bytes"<<endl;
    cout<<"The Size of (Boolean)       :  "<<sizeof(bool)<<"bytes"<<endl;
    return 0;
}