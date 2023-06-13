#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node 
{
    int data;
    struct node *next;

};
struct node *head,*tail,*ptr=NULL;

void begininsert();
void endinsert();
void positioninsert();
void display();

    


void begininsert()
{

    int iteam;
    struct node *ptr;

    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
      printf("OVERFLOW");
    else
    {  printf("ENTER THE DATA\n");
       scanf("%d",&ptr->data);
       ptr->next=head;
       head=ptr;
    }
}
void display()
{
    struct node *ptr,*next;
    ptr=head;

    if(ptr==NULL)
     {printf("overflow");}
    else 
      {printf("printing values");
       while(ptr!=NULL)
      { printf("%d",ptr->data);
       ptr->next=next;
      }
      }
}
int main ()
{
    void begininser();
    void display();
    
    return(0);
    
}
