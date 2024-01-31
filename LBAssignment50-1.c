#include<stdio.h>
int Whitespace(char *str)
{
    static int icnt=0;
    if (*str!=0)
    {
        if (*str==' ')
        {
             icnt++;
        }
        str++;
        Whitespace(str);
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iret=0;
    printf("Enter string:");
    scanf("%[^'\n']s",Arr);
    iret=Whitespace(Arr);
    printf("white  spaces  are %d",iret);
    return 0;
}