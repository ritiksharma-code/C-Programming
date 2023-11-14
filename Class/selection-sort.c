#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[50], n, indexMin, flag=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0; i< n; i++)
    {
        indexMin=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[indexMin])
            {
                indexMin=j;
            }
        }
        swap(&arr[i], &arr[indexMin]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}