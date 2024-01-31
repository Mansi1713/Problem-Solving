#include<stdio.h>
int Max(int ino)
{
    static int idigit=0;
    static int max=0;
    if (ino>0)
    {
        idigit=ino%10;
        if (max<idigit)
        {
            max=idigit;
        }
        ino=ino/10;
        Max(ino);
    }
    return max;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter number");
    scanf("%d",&ivalue);
    iret=Max(ivalue);
    printf("%d",iret);
    return 0;
}