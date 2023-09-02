#include <stdio.h>
int main()
{
    int arr[50], ele, n, i,f=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The element to be searched: ");
    scanf("%d", &ele);

    for(i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            printf("The element found at: %d", i+1);
            f=1;
        }
    }
    if(f==0)
        {
            printf("Element Not found!");
        }
    return 0;
}