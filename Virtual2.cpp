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
    Base *bp1 = new Base;
    Derived *dp2 = new Derived;
    Base *bp2 = new Derived;
  //  Derived *dp2 = new Base; 

    return 0;
}