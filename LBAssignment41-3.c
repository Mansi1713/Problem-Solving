#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    int isize=0;
    int iret=0;
    char Buffersize[1024]={'\0'};
    char filename[30];

    printf("Enter the name of file that you want to create");
    scanf("%s",filename);

    fd=open(filename,O_RDWR);
    if (fd==-1)
    {
        printf("%s unable to open  the file",filename);
    }
    else
    {
        printf("file opened successfully %d %s",fd,filename);
        while (iret=read(fd,Buffersize,sizeof(Buffersize))!=0)
        {
            printf("%s",Buffersize);
        }
        
    }
    return 0;
}