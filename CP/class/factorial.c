#include <stdio.h>
int main()
{
    int n, i, fact=1;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        fact=fact*i;
    }
    printf("The factorial is: %d.", fact);
    return 0;
}