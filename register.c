#include<stdio.h>

void Display()
{
    register No = 11;
    register i;
    
    printf("Value of No : %d\n",No);
    printf("Value of i : %d\n",i);
}
int main()
{
    Display();

    return 0;
}