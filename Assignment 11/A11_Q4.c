// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the number: ");
    scanf("%d", &n);
    a=1;
    while(a<n+1)
    {
        printf(" %d", a);
        a++;

    }
    return 0;
}