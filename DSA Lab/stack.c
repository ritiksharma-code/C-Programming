#include <stdio.h>
#include <process.h>
#include <stdlib.h>

#define MAX 50

int stack[MAX];
int top=-1;
void push();
void pop();
void peek();
void display();

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }    
            case 2:
            {
                pop();
                break;  
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("\nInvalid Choice!\n");
            }
        }
    }
}

void push()
{
    if(top==(MAX-1))
    {
        printf("\nOVERFLOW!\n");
    }
    else
    {
        top++;
        printf("Enter new element: ");
        scanf("%d", &stack[top]);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        printf("%d is deleted!\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("%d is on the top of stack\n", stack[top]);
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d ", stack[i]);
        }
    }
}