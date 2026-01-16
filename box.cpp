#include <iostream>
using namespace std;
class Box
{
    public:
    int length;
    int breadth;
    int height;
    int volume();
    {
        return length*breadth*height;
    }
};
int main()
{
    int vol;
    Box box1,box2;
    box1.length=20;
    box1.breadth=10;
    box1.height=5;
    box2.length=40;
    box2.breadth=15;
    box2.height=8;
    vol=box1.volume();
    cout<<"box1 : "<<vol<<endl;
    vol=box2.volume();
    cout<<"box1 : "<<vol<<endl;
    return 0;
}