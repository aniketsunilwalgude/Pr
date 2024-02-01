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
     void Fun()
     {
        cout<<"Inside Fun of Demo\n";
     }
};
class Hello : public Demo
{
    int a,b,c;

     Hello()
    {
        cout<<"Inside Hello constructure\n";
        a = 30;
        b = 40;
        c = 50;
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

class Marvellous : public Hello
{
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

    cout<<sizeof(mobj)<<"bytes\n";

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";

    mobj.Fun();
    mobj.gun();
    mobj.sun();
    return 0;
}