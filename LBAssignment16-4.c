#include <stdio.h>
#include<stdlib.h>

void Digits (int Arr[],int isize)
{
    int icnt=0;
    
    for ( icnt = 0; icnt <isize; icnt++)
    {
       if ((Arr[icnt]>=100)&&(Arr[icnt]<=999))
       {
         printf("%d\t",Arr[icnt]);
       }
       
        
    }
    
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
   Digits(p,iCount);
   free(p);

}   