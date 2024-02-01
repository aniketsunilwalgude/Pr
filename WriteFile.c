#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,22); //(Kay lihaych,Kashat lihaych,kiti lihaych)

    printf("%d byets get weitten in the file \n",Ret);
   
    close(fd);
    return 0;
}