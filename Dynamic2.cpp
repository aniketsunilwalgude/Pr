#include<iostream>

using namespace std;

class Demo
{
    public:
    int i,j,k;
    Demo()
    {
        cout<<"Inside constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destroctor\n";
    }
    void Display()
    {
        cout<<"Inside Display\n";
    }
};
int main()
{
    Demo obj1;
    obj1.Display();

    Demo *ptr = new Demo;
    ptr->Display();
    delete ptr;

    return 0;
}