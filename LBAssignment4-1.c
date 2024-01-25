#include<stdio.h>
int MultFact(int iNo)
{
   int imul=1;
   int icnt=0;
   for ( icnt = 1;icnt <=(iNo/2); icnt++)
   {
     if ((iNo%icnt) == 0)
     {
        imul=imul*icnt;
     }
     
   }
   return imul;

}

int main()
{
    int iValue=0;
    int iret=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iret=MultFact(iValue);
    printf("%d",iret);

    return 0;
}