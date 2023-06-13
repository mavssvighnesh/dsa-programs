#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next,*prev;

};
struct node *start,*temp,*ptr=NULL;

void insert_beg();
void insert_end();

void delete_beg();
void delete_end();
void display();

int main ()
{
    
    int i=0;
    printf("this is the program to create and to operate the double linked list ");

    while(i!=8)
    {

        printf("\nmenu\n");
        printf("1.insert begining \n2.display\n3.insert end\n4.insert position\n5.delete position\n6.delete end\n7.delete begining \n 8.exit");
        scanf("%d",&i);
        switch(i)
        { case(1):
           insert_beg();
           break;
         case(2):
           display();
           break;
         case(3):
          insert_end();
          break;
         case(4):
            break;
           break;
         case(5):
            break;
          break;
         case(6):
           delete_end();
           break;
         case(7):
            delete_beg();
            break;
         case(8):
            exit(0);

           }
    }
    return(0);
    }

    void insert_beg(){
      ptr=(struct node*)malloc(sizeof(struct node));
      ptr->next=NULL;
      ptr->prev=NULL;
     if(ptr==NULL){
        printf("the memory allocation is failed");

     }
     else {
        printf("enter the number to insert");
        scanf("%d",&ptr->data);

    
     if(start==NULL)
     {
        start=ptr;
        ptr->prev=start;
         }
     else 
     {
        ptr->next=start;
        start->prev=ptr;
        start=ptr;
        start->prev=NULL;

     }
     }
     }
 void display(){
    

   if (start==NULL)
   {
    printf("the list is empty\n ");
   }
   else 
   {
    temp=start;
    printf("printing the values of the list \n");
    while(temp!=NULL)
    {
        printf("the value in node %d \n",temp->data);
        temp=temp->next;
    }
     printf("%d",temp->next->prev->data);
    }
    }
 void insert_end()
   {
     ptr=(struct node*)malloc(sizeof(struct node));
     ptr->next=NULL;
     ptr->prev=NULL;
     if(ptr==NULL){
        printf("the memory allocation is failed");

     }
     else {
        printf("enter the number to insert");
        scanf("%d",&ptr->data);
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
           } 
     } 
void delete_end(){
      int i;
      temp=start;

      while(temp->next->next!=NULL)
        
        {
            temp=temp->next;
        }
        printf("the data in the deleted node is %d",temp->next->data);
         temp->next=NULL;
       }
       void delete_beg(){
    temp=start;
    printf("the data in the deleted node is %d",temp->data);
    start->next->prev=NULL;
    start=start->next;
    
       }

