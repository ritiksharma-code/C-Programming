#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front=-1, rear=-1;

void fenqueue();
void renqueue();
void fdequeue();
void rdequeue();
void display();

int main()
{
    while(1)
    {
        int ch;
        printf("\n1: Front Enqueue\n2: Rear Enqueue\n3: Front Dequeue\n4: Rear Dequeue\n5: Display\n6: Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                fenqueue();
                break;
            case 2:
                renqueue();
                break;
            case 3:
                fdequeue();
                break;
            case 4:
                rdequeue();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}

void fenqueue()
{
    if((front==0&&rear==4)||(rear+1==front))
    {
        printf("\nOVERFLOW!\n");
    }
    else
    {
        if(front==-1)
        {
            front++;
            rear++;
        }
        else if(front!=0)
        {
            front--;
        }
        else if(front==0)
        {
            front=4;
        }
        scanf("%d", &queue[front]);
    }
}

void renqueue()
{
    if((front==0&&rear==4)||(rear+1==front))
    {
        printf("\nOVERFLOW!\n");
    }
    else
    {
        if(rear==-1)
        {
            front++;
            rear++;
        }
        else if(rear==4)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        scanf("%d", &queue[rear]);
    }
}

void fdequeue()
{
    if(front==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        printf("%d is deleted!", queue[front]);
        front=(front+1)%5;
    }
}

void rdequeue()
{
    if(rear==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        if(rear==0)
        {
            printf("%d is deleted!", queue[rear]);
            rear=4;
        }
        else
        {
            printf("%d is deleted!", queue[rear]);
            rear=(rear+1)%5;
        }
    }
}

void display()
{
    if(rear==-1)
    {
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        printf("\n");
        for(int i=front;i!=0;i=(i+1)%5)
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[rear]);
        printf("\n");
    }
}