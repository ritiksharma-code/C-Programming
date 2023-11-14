#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list_node
{
    struct linked_list_node *prev;
    int data;
    struct linked_list_node *next;
} node;
node *start, *rear, *temp;
int count = 0;
void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter the values\n");
    scanf("%d", &temp->data);
    printf("\n");
    temp->next = NULL;
    temp->prev = NULL;
}
void insertatfirst()
{
    create_node();
    count++;
    if (start == NULL)
    {
        start = temp;
        rear = temp;
    }
    else
    {
        start->prev = temp;
        temp->next = start;
        start = temp;
    }
}
void insertatlast()
{
    create_node();
    count++;
    if (start == NULL)
    {
        start = temp;
        rear = temp;
    }
    else
    {
        temp->prev = rear;
        rear->next = temp;
    }
    rear = temp;
}
void insertatmiddle()
{
    int position;
    printf("enter the node number: ");
    scanf("%d", &position);
    if (position >= 1 && position <= count + 1)
    {
        if (position == 1)
        {
            insertatfirst();
        }
        else if (position == count + 1)
        {
            insertatlast();
        }
        else
        {
            create_node();
            count++;
            node *p;
            p = start;
            for (int i = 1; i < position - 1; i++)
            {
                p = p->next;
            }
            temp->next = p->next;
            p->next->prev = temp;
            p->next = temp;
            temp->prev = p;
        }
    }
}

void deleteFirst()
{
    if (start == NULL)
    {
        printf("\nUNDERFLOW!");
    }
    else
    {
        count--;
        if (start == rear)
        {
            free(start);
            start = NULL;
            rear = NULL;
        }
        else
        {
            temp = start;
            start = start->next;
            start->prev = NULL;
            free(temp);
        }
    }
}

void deleteLast()
{
    if (start == NULL)
    {
        printf("\nUNDERFLOW!");
    }
    else
    {
        count--;
        if (start == rear)
        {
            free(start);
            start = NULL;
            rear = NULL;
        }
        else
        {
            temp = rear;
            rear = rear->prev;
            rear->next = NULL;
            free(temp);
        }
    }
}

void deleteMid()
{
    int pos;
    printf("Enter Node Position:");
    scanf("%d", &pos);
    if (pos>=1 &&pos<=count)
    {
        if (pos==1)
        {
            deleteFirst();
        }
        else if (pos==count)
        {
            deleteLast();
        }
        else
        {
            node *ptr=start;
            for (int i=1;i<pos-1;i++)
            {
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=temp->next;
            temp->next->prev=ptr->next;
            free(temp);
        }
    }
}

void Display()
{
    if (start == NULL)
    {
        printf("Underflow");
    }
    else
    {
        node *a = start;
        while (a != NULL)
        {
            printf("%d\n", a->data);
            a = a->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int choice, position;
    while (1)
    {
        printf("\nLINKED LIST MENU:\n");
        printf("1. INSERT AT FIRST\n");
        printf("2. INSERT AT MIDDLE\n");
        printf("3. INSERT AT LAST\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatfirst();
            break;
        case 2:
            insertatmiddle();
            break;
        case 3:
            insertatlast();
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice \n");
        }
    }
    return 0;
}