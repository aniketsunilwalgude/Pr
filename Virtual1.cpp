#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j,k;
    void Fun()
    {
        cout<<"Inside Derived fun\n";
    }
};

class Derived : public Base
{
    public:
    int a,b;
    void Gun()
    {
        cout<<"Inside Derived gun\n";
    }
};

int main()
{
   Base bobj;
   Derived dobj;

   cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    bobj.Fun();

    dobj.Fun();
    dobj.Gun();
    return 0;
}