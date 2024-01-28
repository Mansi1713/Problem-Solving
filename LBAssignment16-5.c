#include<stdio.h>
#include<stdlib.h>
void DigitSum(int Arr[],int iLength)
{
    int idigit=0,icnt=0,isum=0;
     for ( icnt = 0; icnt < iLength; icnt++)
     {
        while (Arr[icnt]!=0)
        {
            idigit=Arr[icnt]%10;
            isum=isum+idigit;
            Arr[icnt]=Arr[icnt]/10;
        }
         printf("%d\t ",isum);
         isum=0;
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
   DigitSum(p,iCount);
   free(p);
}   