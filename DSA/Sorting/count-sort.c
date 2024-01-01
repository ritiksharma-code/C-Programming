#include <stdio.h>

int main()
{
    int a[100], n, i, count[100];
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d", count[i]);
    }
    return 0;
}