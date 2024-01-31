#include<stdio.h>
void Display(int ino)
{
    static int icnt=1;
    if (icnt<=ino)
    {
        printf("%d \t",icnt);
        icnt++;
        Display(ino);
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