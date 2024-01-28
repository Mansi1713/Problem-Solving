#include<stdio.h>
int Difference(char *str)
{
    int ccnt=0,scnt=0;  
    while (*str!='\0')
    {
       if ((*str>='A')&&(*str<='Z'))
       {
          ccnt++;
       }
       else if ((*str>='a')&&(*str<='z'))
       {
          scnt++;
       }
       
       str++;
    }
    return scnt-ccnt;

}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    iRet=Difference(arr);
    printf("%d",iRet);
    return 0;
}