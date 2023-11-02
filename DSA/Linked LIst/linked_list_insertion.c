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
    int pos;
    printf("Enter the node position: ");
    scanf("%d", &pos);
    if(pos>0&&pos<(count+1))
    {
        if(pos==1)
        {
            insertFirst();
        }
        else if(pos==(count+1))
        {
            insertLast();
        }
        else
        {
            node *p;
            create_node();
            count++;
            p=start;
            for(int i=1;i<(pos-1);i++)
            {
                p=p->next;
                temp->next=p->next;
                p->next=temp;
            }
        }
    }
    else
    {
        printf("\nInvalid Position!\n");
        exit(0);
    }
}

void deleteFirst()
{
    if(start==NULL)
    {
        printf("\nUNDERFLOW!");
    }
    else
    {
        count--;
        if(start==rear)
        {
            free(start);
            start=NULL;
            rear=NULL;
        }
        else
        {
            temp=start;
            start=start->next;
            free(temp);
        }
    }
}

void deleteLast()
{
    if(start==NULL)
    {
        printf("\nUNDERFLOW!");
    }
    else
    {
        count--;
        if(start==rear)
        {
            free(start);
            start=NULL;
            rear=NULL;
        }
        else
        {
            temp=start;
            while(temp->next!=rear)
            {
                temp=temp->next;
            }
            free(rear);
            rear=temp;
            rear->next=NULL;
        }
    }
}

void deleteMid()
{
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(start==NULL)
    {
        printf("\nUNDERFLOW!");
    }
    else if(pos==1)
    {
        insertFirst();
    }
    else if(pos==count)
    {
        insertLast();
    }
    else
    {
        node *p, *q;
        p=start;
        for(int i=1;i<(pos-1);i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        free(q);
    }
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
        printf("\n1: Insert at first location\n2: Insert at last location\n3: Insert at mid location\n4: Display\n5: Delete at first location\n6: Delete at last location\n7: Delete at Mid location\n8: Exit\nEnter your choice: ");
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
                display();
                break;
            case 5:
                deleteFirst();
                break;
            case 6:
                deleteLast();
                break;
            case 7:
                deleteMid();
                break;
            case 8:
                exit(0);
            default:
                printf("\nInvalid choice!\n");
                break;
        }
    }
    return 0;
}