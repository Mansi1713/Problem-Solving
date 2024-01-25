#include<stdio.h>
void Display(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    int icnt=0,ijcnt;
    for ( icnt = 0; icnt < iNo; icnt++)
    {
        printf("*\t");
        
    }
    for ( ijcnt = 0; ijcnt < iNo; ijcnt++)
    {
         printf("#\t");
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter number");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}
//Time complexity:
//o(2)//