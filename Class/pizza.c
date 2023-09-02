#include <stdio.h>
int main()
{
    int n;
    printf("Enter your choice: ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("PIZZA\n");
    }
    else
    {
        printf("No lunch today\n");
    }

    return 0;
}