#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd=0;
    fd=open("Marvellous.txt",O_RDWR);

    if (fd!=-1)
    {
        printf("File is successfully created with fd %d",fd);

    } 
    close(fd);  
    return 0;
}


//O_RDONL:Read
//O_WRONLY:write
//O_RDWR:Read+write