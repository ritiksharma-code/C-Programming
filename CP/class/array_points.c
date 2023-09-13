//1 point for every even;
//3 point for every odd;
//5 point for every eight;
#include <stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0,eight=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the values of the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]!=8)
            {
                even++;
            }
        else if(arr[i]%2==1)
        {
            odd++;
        }
        else if(arr[i]==8)
        {
            eight++;
        }
    }
    int total=even+(odd*3)+(eight*5);
    printf("TOTAL = %d", total);

    return 0;
    }