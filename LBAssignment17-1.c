#include<stdio.h>

void Pattern(int iNo)
{
    int icnt=0;
    char cvar='A';
    for ( icnt = 1,cvar='A';icnt <=iNo; icnt++,cvar++)
    {
        printf("%c\t",cvar);
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter number of elements");
    scanf("%d",&ivalue);
    Pattern(ivalue);
}