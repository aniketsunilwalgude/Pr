#include<stdio.h>
int main()

{
int Standerd = 0;
printf("Primery School Portel\n");

printf("Enter Your Division : \n");
scanf("%d",&Standerd);
switch (Standerd)
{
    case 1:
    printf("Your Exam Is At 1 PM\n");
    break;
    case 2:
    printf("Your Exam Is At 2 PM");
    break;
    case 3:
    printf("Your Exam Is At 3 PM\n");
    break;
    case 4:
    printf("Your Exam s At 4 PM\n");
    break;
    default:
    printf("Invalid Standerd \n");
    break;
}
    return 0;
}
