#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    Ret = read(fd,Arr,10); 

    printf("%d byets gets read in the file \n",Ret);
    printf("Data is : %s\n",Arr);
   
    close(fd);
    return 0;
}