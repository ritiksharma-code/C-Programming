#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9,x;
    int low=0, high=n-1;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (low<high)
    {
        if((arr[low]+arr[high])==x)
        {
            printf("YES! ");
            break;
        }
        else if((arr[low]+arr[high]>high))
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    if(low>=high)
    {
        printf("NO! ");
    }
    return 0;
}