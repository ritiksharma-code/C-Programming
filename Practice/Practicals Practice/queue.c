#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], front=-1, rear=-1;

void enqueue()
{
    if(rear==MAX-1)
    {
        printf("QUEUE IS FULL!\n");
    }
    else
    {
        if(rear==-1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        printf("Enter element: ");
        scanf("%d", &queue[rear]);
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("QUEUE IS EMPTY!\n");
    }
    if(front>rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("%d is dequeued!\n", queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1)
    {
        printf("QUEUE IS EMPTY!\n");
    }
    else
    {
        for(int i=front; i<=rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\nEnter choice: ");
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

            case 0:
                exit(0);
            
            default:
                printf("\nINVALID CHOICE!\n");
        }
    }
    return 0;
}