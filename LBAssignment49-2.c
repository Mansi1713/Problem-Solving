#include<stdio.h>
int Sum(int ino)
{
    static int isum=0;
    static int idigit=0;
    if (ino!=0)
    {
        idigit=ino%10; 
        isum=isum+idigit;
        ino=ino/10;
        Sum(ino);
    }
    return isum;
    
}
int main()
{
    int ivalue=0;
    int iret=0; 
    printf("Enter number");
    scanf("%d",&ivalue);
    iret=Sum(ivalue);
    printf("Sumation is : %d",iret);
    return 0;
}