#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
}node;

node *start, *rear, *temp;

void create_node()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter the element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
}

int count=0;

void insertFirst()
{
    create_node();
    count++;
    if(start==NULL)
    {
        start=temp;
        rear=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}

void insertLast()
{
    create_node();
    count++;
    if(start==NULL)
    {
        start=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}

void insertMid()
{
    create_node();

}

void display()
{
    if(start==NULL)
    {
        printf("\nQueue is Empty!\n");
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
    printf("\n");
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Insert at first location\n2: Insert at last location\n3: Insert at mid location\n4: Display\n5: Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insertFirst();
                break;
            case 2:
                insertLast();
                break;
            case 3:
                insertMid();
                break;
            case 4:
                display(0);
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
                break;
        }
    }
    return 0;
}