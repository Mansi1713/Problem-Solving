#include<stdio.h>
int Min(int ino)
{
    static int idigit=0;
    static int min=9;
    if (ino>0)
    {
      
        idigit=ino%10;
        if (min>idigit)
        {
            min=idigit;
        }
        ino=ino/10;
        Min(ino);
    }
    return min;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter number");
    scanf("%d",&ivalue);
    iret=Min(ivalue);
    printf("%d",iret);
    return 0;
}