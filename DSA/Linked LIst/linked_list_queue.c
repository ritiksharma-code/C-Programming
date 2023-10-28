#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
}node;

node *front, *rear, *temp;

void enqueue()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter new element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if(rear==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty!\n");
    }
    else if(front==rear)
    {
        free(front);
        front=NULL;
        rear=NULL;
    }
    else
    {
        temp=front;
        front=front->next;
        printf("\n%d is deleted from queue\n", temp->data);
        free(temp);
        temp=NULL;
    }
}

void display()
{
    if(front==NULL)
    {
        printf("\nQueue is Empty!\n");
    }
    else
    {
        temp=front;
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
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
                break;
        }
    }
    return 0;
}