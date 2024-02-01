#include<stdio.h>
int main()

{
int Standerd = 0;
printf("Primery School Portel\n");

printf("Enter Your Division : \n");
scanf("%d",&Standerd);

if (Standerd == 1)
{
    printf("Your Exam Is At 1 PM\n");
}
else if(Standerd == 2)
{
    printf("Your Exam Is At 2 PM\n");
}
else if(Standerd == 3)
{
    printf("Your Exam Is At 3 PM\n");

}
else if(Standerd == 4)
{
    printf("Your Exam Is At 4 PM\n");

}
else
{
    printf("Invalid Stsnderd\n");
}


    return 0;
}
