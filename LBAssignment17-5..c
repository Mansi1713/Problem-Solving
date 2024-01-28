#include<stdio.h>
void Pattern(int iNo)
{
    int icnt=0;
    for ( icnt = 1; icnt <=iNo; icnt++)
    {
        printf("%d\t",icnt*2);
      
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter number of elements");
    scanf("%d",&ivalue);
    Pattern(ivalue);
} 
