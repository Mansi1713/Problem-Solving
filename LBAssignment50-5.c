#include<stdio.h>
int Rev(int ino)
{
    static int irev=0;
    static int idigit=0;

    if (ino!=0)
    {
        idigit=ino%10; 
        irev=irev*10+idigit;
        ino=ino/10;
        Rev(ino);
    }
    return irev;
    
}
int main()
{
    int ivalue=0;
    int iret=0; 
    printf("Enter number");
    scanf("%d",&ivalue);
    iret=Rev(ivalue);
    printf("Reverse is : %d",iret);
    return 0;
}