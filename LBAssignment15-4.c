#include<stdio.h>
#include<stdlib.h>
void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int icnt=0;
    for ( icnt =0; icnt <iLength; icnt++)
    {
        if ((Arr[icnt]>=iStart)&&(Arr[icnt]<=iEnd))
        {
            printf("%d\t",Arr[icnt]);
            
        }
        
    }
    
}
int main()
{
    int isize=0,icnt=0,ivalue1=0,ivalue2=0;
    int *p=NULL;
    int iret=0;

    printf("Enter number of elemets:\n");
    scanf("%d",&isize);

   printf("Enter the starting point");
   scanf("%d",&ivalue1);

   printf("Enter the ending point");
   scanf("%d",&ivalue2);

   p=(int *)malloc(isize*sizeof(int));
   if (p==NULL)
   {
      printf("Unable to allocate memory..");
      return -1;
   }
   
  
   printf("Enter the elements: %d\n",isize);
   for ( icnt = 0; icnt<isize; icnt++)
   {
       printf("Enter the elements no %d:",icnt+1);
       scanf("%d",&p[icnt]);
   }
    Range(p,isize,ivalue1,ivalue2);
   free(p);
   return 0;

}