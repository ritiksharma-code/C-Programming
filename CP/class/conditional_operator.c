#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    (a>b)?printf("a is greater"):(b>a)?printf("b is greater"):printf("Equal");
    return 0;
}