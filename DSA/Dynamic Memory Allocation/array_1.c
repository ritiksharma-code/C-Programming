#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("No Elements Inserted");
        exit(0);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
}