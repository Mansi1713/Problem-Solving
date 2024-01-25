#include<stdio.h>
void PrintEven(int iNo)
{
     int icnt=0; 
    for( icnt=0;icnt<=iNo;icnt++)
    {
        icnt=icnt+2;
        printf("%d",icnt);

    }
    
    
    
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    PrintEven(iValue);

    return 0;
}