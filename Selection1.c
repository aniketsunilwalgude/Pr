 #include<stdio.h>

 int main()
 {
    int No = 0;
    int Ans = 0;
    printf("Enter Number : \n");
    scanf("%d",&No);

    Ans = No % 2;
    if (Ans == 0)  //Jar
    {
        printf("Number is even\n");
    }
    else //Nasel Tr
    {
        printf("Number is Odd\n");
    }


    return 0;
 }