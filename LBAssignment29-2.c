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
int SearchLastOCC(PNODE Head,int no)
{
       int icnt=1,lastoccr=0;
       PNODE temp = Head;
       while (temp!= NULL)
       {
         if (temp->data==no)
         {
            
           lastoccr=icnt;
            
         }
         temp=temp->next;
         icnt++;
        
      }   
      return lastoccr;
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
     InsertFirst(&First,70);
     InsertFirst(&First,60);
     InsertFirst(&First,50);
     InsertFirst(&First,40);
     InsertFirst(&First,60);
     InsertFirst(&First,20);
     InsertFirst(&First,10);
 
     Display(First); 
     iRet=SearchLastOCC(First,60);
     printf("\npostion of element is %d",iRet);
     return 0;

}