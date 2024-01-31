#include<stdio.h>
int Mult(int ino)
{
    static int imul=1;
    static int idigit=0;
    if (ino!=0)
    {
        idigit=ino%10; 
        imul=imul*idigit;
        ino=ino/10;
        Mult(ino);
    }
    return imul;
    
}
int main()
{
    int ivalue=0;
    int iret=0; 
    printf("Enter number");
    scanf("%d",&ivalue);
    iret=Mult(ivalue);
    printf("Multiplication is : %d",iret);
    return 0;
}