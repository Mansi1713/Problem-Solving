#include<stdio.h>
int Strlen(char *str)
{
    static int icnt=0;
    if (*str!=0)
    {
        icnt++;
        str++;
        Strlen(str);
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iret=0;
    printf("Enter string:");
    scanf("%[^'\n']s",Arr);
    iret=Strlen(Arr);
    printf("Length of string is %d",iret);
    return 0;
}