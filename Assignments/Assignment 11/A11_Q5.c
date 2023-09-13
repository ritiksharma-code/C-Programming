// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    {
        int a,b,sum;
        a=2;
        b=4;
        sum=a+b;
        printf("The sum of %d and %d is %d.",a,b,sum);
        break;
    }
    case 2:
    {
        int a,b,sum;
        a=4;
        b=5;
        sum=a+b;
        printf("The sum of %d and %d is %d.", a,b,sum);
        break;
    }
    case 3:
    {
        int a,b,sum;
        a=10;
        b=20;
        sum=a+b;
        printf("The sum of %d and %d is %d.",a,b,sum);
        break;
    }

    default:
        break;
    }
    return 0;
}