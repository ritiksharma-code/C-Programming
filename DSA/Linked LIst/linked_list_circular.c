#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
}node;

node *temp, *last;

void enqueue()
{
    temp=(node*)malloc(sizeof(node));
    printf("Enter the element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if(last==NULL)
    {
        last=temp;
        last->next=last;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}

void dequeue()
{
    if(last==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(last->next==last)
    {
        printf("\n%d has been deleted.\n", last->data);
        free(last);
        last=NULL;
    }
    else
    {
        temp=last->next;
        last->next=temp->next;
        printf("\n%d has been deleted.\n", temp->data);
        free(temp);
    }
}

void display()
{
    if(temp==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        temp=last->next;
        while(temp!=last)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d", last->data);
    }
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