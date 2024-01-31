#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  int fd=0;
  int iret=0;
  char fileName[30];
  int isize=0;
  char Str[20];
  printf("Enter the name of the file that you want to create");
  scanf("%s",fileName);   
  fd=open(fileName,O_RDWR|O_APPEND);
  if (fd==-1)
  {
    printf("%s unbale to open file",fileName);
  }
  else
  {
    printf("%s gets opened successfully with descriptor %d \n",fileName,fd);
    printf("Enter the string name that you want to write");
    scanf("%[^'s']",Str);
    iret=write(fd,Str,strlen(Str));
    printf("%d bytes gets succesfully written",iret);

    close(fd);
  }
  
}    