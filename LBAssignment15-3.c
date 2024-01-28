#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[],int isize,int ino)
{
    int icnt=0;
    for ( icnt = isize-1; icnt >=0; icnt--)
    {
       if (ino==Arr[icnt])
       {
          return icnt;
       }
       
    }
    return -1;
}
int main()
{
    int icount=0,icnt=0,ivalue=0;
    int *p=NULL;
    int iret=0;

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
     iret=LastOcc(p,icount,ivalue);
    if (iret==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number is %d",iret);
    } 
   free(p);
   return 0;

}