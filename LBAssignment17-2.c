#include<stdio.h>
void Pattern(int iNo)
{
    int icnt=0;
    for ( icnt = iNo; icnt >=1; icnt--)
    {
      printf("\t%d\t#",icnt);
    }
    

}
int main()
{
    int ivalue=0;
    printf("Enter number of elements");
    scanf("%d",&ivalue);
    Pattern(ivalue);
} 
