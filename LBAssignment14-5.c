#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int isize,int ino)
{
    int icnt=0;
    int iFrequency=0;

    for ( icnt = 0; icnt<isize; icnt++)
    {
       if (Arr[icnt]==ino)
       {
         iFrequency++;
       }
         
    }
    return iFrequency;
}
int main()
{
    int icount=0,icnt=0,ivalue=0;
    int *p=NULL;
    int  iret=0;

    printf("Enter number of elements you want to enter\n");
    scanf("%d",&icount);

    printf("Enter the element :\n");
    scanf("%d",&ivalue);

   p=(int *)malloc(icount*sizeof(int));
   printf("Dynamic memory gets allocated successfully..");

   printf("Enter the elements: %d\n",icount);
   for ( icnt = 0; icnt < icount; icnt++)
   {
       printf("Enter the elements no %d:",icnt+1);
       scanf("%d",&p[icnt]);
   }
   iret=Frequency(p,icount,ivalue);
   printf("%d ",iret);
   free(p);
   return 0;

}