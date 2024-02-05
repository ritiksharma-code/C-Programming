#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX], top=-1;

void push()
{
    if(top==MAX-1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        printf("Enter the element: ");
        scanf("%d", &stack[top]);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("%d is deleted!", stack[top]);
        top--;
    }
}

void display()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        printf("%d is on top of the stack", stack[top]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n0. Exit\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch)
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
                peek();
                break;

            case 0:
                exit(0);
            
            default:
                printf("\nINVALID CHOICE!\n");
        }
    }
    return 0;
}