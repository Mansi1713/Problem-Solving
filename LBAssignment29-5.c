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
int Minimum(PNODE Head)
{
    
       PNODE temp = Head;
       while (temp!= NULL)
       {
           temp=temp->next;
           if (temp->data<temp->next->data)
           {
            
               return temp->data;
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
     InsertFirst(&First,640);
     InsertFirst(&First,240);
     InsertFirst(&First,20);
     InsertFirst(&First,230);
     InsertFirst(&First,110);

     
     Display(First); 
     iRet=Minimum(First);
     printf("\nSmallest  element is %d",iRet);
     return 0;

}