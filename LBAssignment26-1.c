#include<stdio.h>
int CountCapital(char *str)
{
    int icnt=0;  
    while (*str!='\0')
    {
       if ((*str>='A')&&(*str<='Z'))
       {
          icnt++;
       }
       
       str++;
    }
    return icnt;

}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    iRet=CountCapital(arr);
    printf("%d",iRet);
    return 0;
}