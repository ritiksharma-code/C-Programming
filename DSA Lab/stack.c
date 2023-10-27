#include <stdio.h>
#include <stdlib.h>

int push(int[], int); // Return with argument
int pop(int[], int);  // Return with argument
void peek(int[], int);// No Return with argument
void display(int[], int); // No Return with argument

int main()
{
    int stack[50], top=-1;
    int ch,ele;
    while(1)
    {
        printf("\n1: PUSH\n2: POP\n3: PEEK\n4: DISPLAY\n5: EXIT\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            {
                top=push(stack, top);
                break;
            }    
            case 2:
            {
                top=pop(stack, top);
                break;  
            }
            case 3:
            {
                peek(stack, top);
                break;
            }
            case 4:
            {
                display(stack, top);
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

int push(int stack[], int top)
{
    if(top==49)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        top++;
        printf("Enter the element: ");
        scanf("%d", &stack[top]);
    }
    return top;
}

int pop(int stack[], int top)
{
    if(top==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        printf("%d", stack[top]);
        top--;
    }
    return top;
}

void peek(int stack[], int top)
{
    if(top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("%d is at top of the stack.", stack[top]);
    }
}

void display(int stack[], int top)
{
    int i;
    if(top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d ", stack[i]);
        }
    }
}