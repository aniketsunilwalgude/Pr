#include<iostream>
using namespace std;

class Base 
{
    public:
    int i,j,k;
         void Fun()  // 1000
        {   cout<<"Base fun\n";  }
        virtual void Gun()  // 2000
        {   cout<<" Base gun\n";   }
        virtual int Addition(int no1, int no2) = 0;


};
class Derived : public Base

{
       public:
        int a,b;
         void Gun()  // 5000
        {   cout<<"derived gun\n";   }
        virtual void Sun()  // 6000
        {   cout<<" derived Sun\n";  }
        int Addition(int no1, int no2)
        {
            return no1 + no2;
        }
    
};

int main()
{
   // Base bobj;
    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is :"<<Ret<<"\n";

    return 0;
}