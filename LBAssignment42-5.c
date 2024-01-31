//accept file name from user read whole file and count bytes in it

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void Display(char file[],int isize)
{
   int fd=0;
   char Arr[1024];
   char character;
    int count=0, currentCount = 0,iret=0;
   fd=open(file,O_RDONLY);
   if (fd==-1)
   {
     printf("Unable to open the file");
   }
   else{
    printf("\nFile opened successfully with file descriptor %d :",fd);
    iret=read(fd,Arr,isize);
    printf("%s",Arr); 
   }
   
}
int main()
{
  char fileName[30];
  int icnt=0;
  int iret=0;

  printf("\nEnter the file name :");
  scanf("%s",&fileName);

   printf("\nEnter the number  of count:");
   scanf(" %d",&icnt);

  Display(fileName,icnt);
  return 0;
}    