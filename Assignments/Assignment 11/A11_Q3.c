// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times you want to print HELLO WORLD: ");
    scanf("%d", &n);

    while(n)
    {
        printf("HELLO WORLD\n");
        n=n-1;
    }
    return 0;
}