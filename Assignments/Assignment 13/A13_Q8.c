// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b=a*(-1);
    printf("1. Positive\n2. Negative\n");
    scanf("%d", &a);

    switch(a)
    {
    case 1:
    {
        printf("%d",b);
        break;
    }
    case 2:
    {
        printf("%d",b);
        break;
    }
    
    default:
    {
        printf("Invalid Input!");
        break;
    }
    }
    return 0;
}