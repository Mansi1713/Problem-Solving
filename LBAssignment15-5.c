#include<stdio.h>
#include<stdlib.h>
int Product(int Arr[],int iSize)
{
    int icnt=0;
    int iproduct=1;
    printf("\nElements of the array are:\n");
    for( icnt = 0; icnt < iSize; icnt++)
    {
        if ((Arr[icnt]%2)!=0)
        {
             iproduct=iproduct*Arr[icnt];
        }
        
    }
    return iproduct;
}
int main()
{
   int iCount=0,icnt=0,iret=0;
   int *p=NULL;
   printf("Enter the number of elements that you want to enter");
   scanf("%d",&iCount);
   p=(int*)malloc(iCount*sizeof(int));

   printf("Enter the %d values \n",iCount);

   for( icnt = 0; icnt <iCount; icnt++)
   {
     
      scanf("%d",&p[icnt]);
   }
   iret=Product(p,iCount);
   printf("Product is %d\n",iret);
   free(p);
   
   return 0;
}
