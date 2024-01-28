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
void RevNum(PNODE head)
{
    int iDigit=0;
    int iRev=0;
    while (head!=NULL)
    {
    iRev=0;  
    while (head->data!=0)
    {
   
        iDigit=head->data%10;
        head->data=head->data/10;
        iRev=(iRev*10)+iDigit;
    }
    printf("\t%d",iRev);
    head=head->next;
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
     InsertFirst(&First,640);
     InsertFirst(&First,240);
     InsertFirst(&First,20);
     InsertFirst(&First,230);
     InsertFirst(&First,110);
 
     Display(First); 
     RevNum(First);
     return 0;

}