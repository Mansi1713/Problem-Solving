#include<stdio.h>
double SquareMeter(int iValue)
{
    double smeter=0.0f;
    smeter=iValue * 0.092903;
    return smeter;

       
}
int main()
{
    int ivalue=0;
    double dret=0.0f;

    printf("Enter area in square feet");
    scanf("%d",&ivalue);

    dret=SquareMeter(ivalue);
    printf("%f",dret);
}