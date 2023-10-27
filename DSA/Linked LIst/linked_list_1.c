// Creating a linked list and entering the elements into it and displaying the elements in the linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
}node;

node *start, *last, *temp;

void create_node()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter new element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
}

void display()
{
    if(start==NULL)
    {
        printf("No data available!");
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int num;
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    for(int i=0;i<num;i++)
    {
        create_node();
        if(start==NULL)
        {
            start=temp;
            last=temp;
        }
        else
        {
            last->next=temp;
            last=temp;
        }
    }
    display();
    return 0;
}