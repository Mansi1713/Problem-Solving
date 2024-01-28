#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool check(int Arr[],int isize,int ino)
{
    int icnt=0;
    for ( icnt = 0; icnt <isize; icnt++)
    {
       if (ino==Arr[icnt])
       {
          return TRUE;
       }
       else
       {
        
        return FALSE;
       }
           
    }
}
int main()
{
    int icount=0,icnt=0,ivalue=0;
    int *p=NULL;
    bool  bret=FALSE;

    printf("Enter number of elements you want to enter\n");
    scanf("%d",&icount);

   
   p=(int *)malloc(icount*sizeof(int));
   printf("Dynamic memory gets allocated successfully..");

   printf("Enter the elements: %d\n",icount);
   for ( icnt = 0; icnt < icount; icnt++)
   {
       printf("Enter the elements no %d:",icnt+1);
       scanf("%d",&p[icnt]);
   }
    printf("Enter the element :\n");
    scanf("%d",&ivalue);
   bret=check(p,icount,ivalue);
   if (bret == TRUE)
   {
     printf("Number is present ");
   }
   else
   {
      printf("Number is not present ");
   }  
   free(p);
   return 0;

}