//accept file name from user read whole file and count bytes in it

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  char Arr[100]={'\0'};
  int fd=0;
  int iret=0;
  char fileName[30];
  int isize=0;
  printf("Enter the name of the file that you want to create");
  scanf("%s",fileName);   
  fd=open(fileName,O_RDWR);
  if (fd==-1)
  {
    printf("%s unbale to open file",fileName);
  }
  else
  {
    printf("%s gets opened successfully with descriptor %d \n",fileName,fd);
    while ((iret=read(fd,Arr,sizeof(Arr)))!=0)
    {
        isize=isize+iret;

    }
    printf("File contains %d bytes in it",isize);
    
    close(fd);
  }
  
}    