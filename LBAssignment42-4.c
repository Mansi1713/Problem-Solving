//accept file name from user read whole file and count bytes in it

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int CountLetter(char file[],char ch)
{
   int fd=0;
   char Arr[1024];
   int iret=0,icnt=0,i=0;
   fd=open(file,O_RDONLY);
   if (fd==-1)
   {
     printf("Unable to open the file");
   }
   else{
    printf("\nFile opened successfully with file descriptor %d :",fd);
    while (iret=read(fd,Arr,sizeof(Arr)))
    {
       for ( i = 0; i < iret; i++)
        {
          if ((Arr[i]==ch))
          {
             icnt++;
          }
          
        }
        
    }
    return icnt;
    
   }
   

}
int main()
{
  char fileName[30];
  char ch;
  int iret=0;

  printf("\nEnter the file name :");
  scanf("%s",&fileName);

   printf("\nEnter the char to search  :");
   scanf(" %c",&ch);

  iret=CountLetter(fileName,ch);
  printf("\nNumber of white spaces are %d :",iret);
  return 0;
}    