#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int top = -1;
int stack[MAX];

void push()
{
    if(top==(MAX-1))
    {
        printf("OVERFLOW!");
    }
    else
    {
        top++;
        scanf("%d", &stack[top]);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        printf("%d", stack[top]);
    }
}

void display()
{
    if(top==-1)
    {
        printf("UNDERFLOW!");
    }
    else{
        for(int i=top;i<=0;i--)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Push\n2: Pop\n3: Peek\n4: Display\n5: Exit\nEnter a choice: ");
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
            peek();
            break;

        case 4: 
            display();
            break;

        case 5: 
            exit(0);

        default:
            printf("Invalid Choice!");
            break;
        }
    }
    
    return 0;
}