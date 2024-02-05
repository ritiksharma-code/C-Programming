#include <stdio.h>

int main()
{
    int n, arr[50], flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("\n");
    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}