#include<stdio.h>
void Display(char cvalue)
{
  
    if (cvalue>='A' && cvalue<='Z')
    {
       cvalue=cvalue+32; 
       printf("%c",cvalue);
    }
    else if (cvalue>='a' && cvalue<='z')
    {
         cvalue=cvalue-32; 
         printf("%c",cvalue);
    }

}
int main()
{
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}