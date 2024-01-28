#include<stdio.h>
void Display(char chDiv)
{
  
    if (chDiv=='A' || chDiv=='a')
    {
        
       printf("Your exam is at  7am");
    }
     else if (chDiv=='B' || chDiv=='b')
    {
        
       printf("Your exam is at  8:30am");
    }
    else if (chDiv=='C' || chDiv=='c')
    {

         printf("Your exam is at  9:20am");
    }
    else if (chDiv=='D' || chDiv=='d')
    {
        
         printf("Your exam is at  10:30am");
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