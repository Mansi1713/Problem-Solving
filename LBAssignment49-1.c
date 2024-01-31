#include<stdio.h>
void Display(int ino)
{
    if (ino!=0)
    {
        printf("%d\t",ino);
        printf("*\t");
        Display(ino-1);
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