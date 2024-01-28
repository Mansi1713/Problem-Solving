#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h> 
//Structure Declation
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int NO)
{
       PNODE newn = NULL;
       newn = (PNODE)malloc(sizeof(NODE));
       
       newn->data=NO;
       newn->next=NULL;

       if (*Head==NULL)
       {
          *Head=newn;
       }
       else
       {
          newn->next=*Head;
          *Head=newn;
       }
       
}
void Pallindrome(PNODE head)
{
    int iDigit=0;
    int iRev=0;
    int itemp=head->data;
    while (head!=NULL)
    {
    //iRev=0;   
    while (head->data!=0)
    {
   
        iDigit=head->data%10;
        head->data=head->data/10;
        iRev=(iRev*10)+iDigit;
        
     }
     if (iRev == itemp)
       {
         printf("\t%d",itemp);
         head=head->next;   
          
      } 
      else
      {
      head=head->next;    
}
}
}
void Display(PNODE Head)
{
      printf("elements of linked list are:\n");
      while (Head!= NULL)
      {
        printf("|%d|->",Head->data);
        Head=Head->next;
      }
      
}
int main()
{
     PNODE First=NULL;
     int iRet=0;
     InsertFirst(&First,89);
     InsertFirst(&First,6);
     InsertFirst(&First,414);
     InsertFirst(&First,17);
     InsertFirst(&First,28);
     InsertFirst(&First,11);
 
     Display(First); 
     Pallindrome(First);
     return 0;

}