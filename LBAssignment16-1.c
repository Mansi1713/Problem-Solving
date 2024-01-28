#include <stdio.h>
#include<stdlib.h>

int Maximum (int Arr[],int isize)
{
    int icnt=0;
    int imax=Arr[0];
    for ( icnt = 0; icnt <isize; icnt++)
    {
        if (Arr[icnt] > imax)
        {
            imax=Arr[icnt];
        }
        
    }
    return imax;
    
}
int main()
{
   int iCount=0,icnt=0,ivalue=0,iret=0;
   int *p=NULL;
   printf("Enter the number of elements that you want to enter");
   scanf("%d",&iCount);
   p=(int*)malloc(iCount*sizeof(int));

   if (p==NULL)
   {
      printf("unable to allocate memory");
      return -1;
   }
   printf("Enter the %d values \n",iCount);
   for( icnt = 0; icnt <iCount; icnt++)
   {
      printf("Enter the %d value \n",icnt+1);     
      scanf("%d",&p[icnt]);
   }
   iret=Maximum(p,iCount);
   printf("Largest number is %d \n",iret);
   free(p);

}   