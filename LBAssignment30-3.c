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
int AdditionEven(PNODE Head)
{
       int icnt=1,esum=0;
       while (Head!= NULL)
       {
         
           if ((Head->data%2)==0)
           {
          
             esum=esum+Head->data;
              
            
           }
           Head=Head->next; 
           
         
      }   
      return esum;   
             
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
     InsertFirst(&First,11);
     InsertFirst(&First,20);
     InsertFirst(&First,32);
     InsertFirst(&First,41);
     Display(First); 
     iRet=AdditionEven(First);
     printf(" Sum of even numbers is %d",iRet);
    
     return 0;

}