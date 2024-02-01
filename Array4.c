#include<stdio.h>
int main()
{
int Arr[4] = {11,21,51,101};
printf("Base Address of Array : %d\n",Arr);

printf("Base Address of first element of array : %d\n",&(Arr[0]));

printf("Base Address of second element if array : %d\n",&(Arr[0]));
printf("First Element is : %d\n",Arr[0]);

printf("Size of whole array : %d\n",sizeof(Arr));

printf("Size of second element of array : %d\n",sizeof(Arr[1]));

    return 0;
}
