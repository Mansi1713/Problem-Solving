#include<stdio.h>
void Display(int iNo)
{
    int i=0;
    for ( i = 1; i <=iNo; i++)
    {
        printf("%d\t",i);
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);
}