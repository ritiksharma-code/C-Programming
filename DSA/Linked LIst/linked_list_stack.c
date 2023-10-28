#include <stdio.h>
#include <stdlib.h>

typedef struct linknode
{
    int data;
    struct linknode *next;
}stack;

stack *top, *temp;

void create_node()
{
    temp=(stack*)malloc(sizeof(stack));
    printf("Enter the element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
}

void push()
{
    create_node();
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

void pop()
{
    if(top==NULL)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}

void display()
{
    if(top==NULL)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("\n%d", temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Push\n2: Pop\n3: Display\n4: Exit\nEnter a choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4: 
            exit(0);

        default:
            printf("Invalid Choice!");
            break;
        }
    }
    return 0;
}