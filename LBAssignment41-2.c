#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    fd=creat("demo.txt",O_RDONLY);
    if (fd==-1)
    {
        printf("unable to crete the file");
    }
    else
    {
        printf("file created successfully %d",fd);;
    }

    return 0;
}