#include<stdio.h>
#include<string.h>
void Reverse(char *str)
{
    int i=0,j=0;
    char temp='\0';
    int Lenght=strlen(str);
    for (i=0,j = Lenght-1; i<j; i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reverse string is %s",str);
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter string");
    scanf("%[^'\n']s",arr);
    Reverse(arr);
    return 0;
}