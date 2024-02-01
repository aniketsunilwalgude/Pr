#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        cout<<"Inside Demo constructure\n";
        x = 10;
        y = 20;
    }
    ~Demo()
    {
        cout<<"Inside Demo destructure\n";
    }
     void fun()
     {
        cout<<"Inside fun of Demo\n";
     }
};
class Hello 
{
    public:
    int a,b;

     Hello()
    {
        cout<<"Inside Hello constructure\n";
        a = 30;
        b = 40;
    }
    ~Hello()
    {
        cout<<"Inside Hello destructure\n";
    }
    void gun()
    {
        cout<<"Inside gun of hello\n";
    }
};

class Marvellous : public Hello, public Demo
{
    public:
    int p;
    Marvellous()
    {
        cout<<"Inside constructour of Marvellous\n";
        p = 60;

    }

    ~Marvellous()
    {
        cout<<"Inside destructor of Marvellous\n";
    }
    void sun()
    {
          cout<<"Inside sun of marvellous\n";
        
    }
};
int main()
{
    Marvellous mobj;

    cout<<sizeof(mobj)<<" bytes \n";

    mobj.fun();
    mobj.gun();
    mobj.sun();
    return 0;
}