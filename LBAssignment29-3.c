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
int Addition(PNODE Head)
{
       int icnt=1,lsum=0;
       PNODE temp = Head;
       while (temp!= NULL)
       {
         
           lsum=lsum+temp->data; 
           temp=temp->next;
      }   
      return lsum;
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
     InsertFirst(&First,40);
     InsertFirst(&First,30);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
 
     Display(First); 
     iRet=Addition(First);
     printf("\nAddition of element in linked list is %d",iRet);
     return 0;

}