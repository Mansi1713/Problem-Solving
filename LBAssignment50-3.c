#include<stdio.h>
int Small(char *str)
{
    static int icnt=0;
    if (*str!=0)
    {
        if ((*str>='a') &&(*str<='z'))
        {
             icnt++;
        }
        str++;
        Small(str);
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iret=0;
    printf("Enter string:");
    scanf("%[^'\n']s",Arr);
    iret=Small(Arr);
    printf("Small letters are %d",iret);
    return 0;
}