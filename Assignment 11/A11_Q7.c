// Author: Ritik Sharma

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d", &a);
    b=a%10;
    c=a/10;
    b=0;
    printf("%d%d", c,b);
    return 0;
}