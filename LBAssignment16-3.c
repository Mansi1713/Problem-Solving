#include <stdio.h>
#include<stdlib.h>

int Difference (int Arr[],int isize)
{
    int icnt=0;
  
    int imax=Arr[0];
    int imin=Arr[0];
    for ( icnt = 0; icnt <isize; icnt++)
    {
        if (Arr[icnt] > imax)
        {
            imax=Arr[icnt];
        }
        else
        {
            imin=Arr[icnt];
        }
        
    }
    
    return imax-imin;
    
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
   iret=Difference(p,iCount);
   printf("Difference  is %d \n",iret);
   free(p);

}   