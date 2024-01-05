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
    printf("Enter right child of %d: ",x);
    newnode->right=create();
}

void inorder(node *root)
{
    if(root==0)
    {
        return;
    }

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(node *root)
{
    if(root==0)
    {
        return;
    }

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if(root==0)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    node  *root;
    root=0;
    root=create();
    printf("Inorder is: ");
    inorder(root);
    printf("\nPreorder is: ");
    preorder(root);
    printf("\nPostorder is: ");
    postorder(root);
    return 0;
}