#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdbool.h>
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
void DisplayPrime(PNODE Head)
{
    
       PNODE temp = Head;
       int icnt=2;
       while (temp!= NULL)
       {
           icnt=2;
          if ((temp->data % icnt)==0)
          {
            
            temp=temp->next;
            icnt++;
          }
          else
          {
           printf("\t%d",temp->data);
            temp=temp->next;
            icnt++;
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
     int iret=0;
     InsertFirst(&First,89);
     InsertFirst(&First,22);
     InsertFirst(&First,41);
     InsertFirst(&First,17);
     InsertFirst(&First,20);
     InsertFirst(&First,11);

     
     Display(First); 
     DisplayPrime(First);
    
     
     
    
     return 0;

}