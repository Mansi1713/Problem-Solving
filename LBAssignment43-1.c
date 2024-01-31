#include<stdio.h>
int main()
{
   int inO=0,idigit=0,isum=0;
   int temp=0;
   temp=inO;
   printf("Enter the number ");
   scanf("%d",&inO);
   inO=0;
   while (inO!=0)
   {
      idigit=inO%10;
      isum+=idigit*idigit*idigit;
      inO=inO/10;
   }

   if (temp==isum)
   {
     printf("number is amstrong");
   }
   else
   {
    printf("not an amstrong");
   }
   

    return 0;
}