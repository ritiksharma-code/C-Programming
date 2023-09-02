// Given an array of number, arrange in it in the form of single number such that the concluded number is the maximum.


#include <stdio.h>
int main()
{
    int a[50], b[50], n, m, i, j, r, swap;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the values in the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        r=a[i]%10;
        a[i]=a[i]/10;
        b[i]=a[i];
        m=n+i;
        b[m]=r;
    }
    printf("Unsorted array: \n");
    for(i=0;i<m;i++)
    {
        printf("%d ", b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            if (b[i]<b[j])
            {
                swap=b[i];
                b[i]=b[j];
                b[j]=swap;
            }
        }
    }
    printf("\n");
    printf("Sorted Array: \n");
    for(i=0;i<m;i++)
    {
        if(b[i]=='\0')
        {
            break;
        }
        printf("%d ", b[i]);
    }
    return 0;
}