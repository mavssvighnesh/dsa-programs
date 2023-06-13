#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;

};
struct node *head,*head2,*ptr,*ktr,*temp;



int main()
 {  

    int i,j=5,k,n=5;
    printf("this is the program to merge two linked lists\n");
    
     while(i==n)
    
       { ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr==NULL)
        {
            printf("memory allocation is failed\n");

        }
        else{
        printf("enter the data for the node \n");
        scanf("%d",&ptr->data);
        if(head==NULL)
        {
            ptr=head;
        }    
        else
        {
            ptr->next=head;
            head=ptr;

        }
    
        }
        i++;
        }
    
    printf("enter the number of elements in the second list \n");
    
    while(k==j)
    {
                ptr=(struct node*)malloc(sizeof(struct node));
        printf("enter the data for the node \n");
        scanf("%d",&ptr->data);
        if(head2==NULL)
        {
            ptr=head2;
        }    
        else
        {
            ptr->next=head;
            head2=ptr;

        }
       k++;
    }
    

    printf("printing the values of the merged list ");
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=head2;
    ktr=head;
    while(ktr->next!=NULL)
    {
        printf("\n the data in the node %d",ktr->data);
        ktr=ktr->next;

    }}
