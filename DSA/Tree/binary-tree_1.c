#include <stdio.h>
#include <stdlib.h>

typedef struct treenode
{
    int data;
    struct treenode *left, *right;
}node;

node * create()
{
    int x;
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    printf("Enter the data (-1 for no node): ");
    scanf("%d", &x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d: ", x);
    newnode->left=create();
    printf("Enter the right child of %d: ",x);
    newnode->right=create();
}

int main()
{
    node  *root;
    root=0;
    root=create();
    return 0;
}