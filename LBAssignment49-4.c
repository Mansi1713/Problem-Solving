#include<stdio.h>
int Fact(int ino)
{
    static int  icnt=0;
    static int ifact=1;
    if (icnt<=ino)
    {
      ifact=ifact*icnt;
      icnt++;
      Fact(ino);
    }
    return ifact;
}
int main()
{
    int value=0;
    int iret=1;
    printf("Enter the number \n");
    scanf("%d",&value);
    iret=Fact(value);
    printf("%d",iret);
    return 0;
}