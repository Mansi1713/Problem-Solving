#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;
    fd=creat("Marvellous.txt",0777);
    if (fd!=-1)
    {
        printf("File is successfully created with fd %d",fd);

    }   
    return 0;
}