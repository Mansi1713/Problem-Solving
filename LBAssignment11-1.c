#include<stdio.h>
void Display(int ino)
{
    int iDigit=0;
    if (ino<0)
    {
        ino=-ino;
    }
    while (ino!=0)
    {
        iDigit=ino%10;
        printf("%d",iDigit);
        ino=ino/10;

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