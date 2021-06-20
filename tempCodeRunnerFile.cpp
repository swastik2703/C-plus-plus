#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;

int main()
{
    int choise;
    while(1)
    {
         printf("enter the choises\n");
         scanf("%d",&choise);
         switch(choise)
         {
        case 1: create();
                break;
        case 2: display();
                break;
         }
    }
}
void create()
{
    struct node *newnode,*temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data for node \n");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
        temp=newnode=head;
    }
    else
    {
        
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}

void display()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;

            /* Move pointer to next node */
            temp = temp->next;
        }
    }
}

