#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    fd=open("demo.txt",O_RDONLY);
    if (fd==-1)
    {
        printf("unable to open the file");
    }
    else
    {
        printf("file opened successfully");
    }

    return 0;
}