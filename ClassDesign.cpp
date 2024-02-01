#include<iostream>
using namespace std;

class Array
{
    private:
    int *Arr;
    int iLength;

    public:
    Array(int Size)
    {
        iLength = Size;
        Arr = new int[iLength];
    }
    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the elements :"<<"\n";
        for(iCnt = 0; iCnt < iLength;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
        void Display()
    {
        int iCnt = 0;
        cout<<"Elements of the array are :"<<"\n";
        for(iCnt = 0; iCnt < iLength;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
};

int main()
{
    Array aobj(5);
    Array aobj(12);
    
    return 0;
}