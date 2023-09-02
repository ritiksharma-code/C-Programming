// Complexity is n


#include <stdio.h>
int main()
{
    int n, i, arr[50], right;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=(n-1); i>=0; i--)
    {
        if(arr[i]>=right)
        {
            printf("%d ", arr[i]);
            right=arr[i];
        }
    }



    return 0;
}