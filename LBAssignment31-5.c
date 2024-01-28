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
void DisplayLarge(PNODE Head)
{
   int idigit=0;
   int largest=0;
   while (Head!=NULL)
   {
    
    largest=0;
    while (Head->data!=0)
    {
    idigit=Head->data%10;

      if (idigit >= largest) {
            largest = idigit;
            
           
        }
      Head->data=Head->data/10; 
    }
    printf("\t%d",largest);
    Head=Head->next;
    
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
     InsertFirst(&First,419);
     InsertFirst(&First,532);
     InsertFirst(&First,250);
     InsertFirst(&First,11);
 
     Display(First); 
     DisplayLarge(First);
     return 0;

}