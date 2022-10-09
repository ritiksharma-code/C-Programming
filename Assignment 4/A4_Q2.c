// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num1, num2, sub;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered %d and %d.", num1, num2);
    sub=num1-num2;
    printf("\nThe subtraction of both numbers is %d.", sub);
    return 0;
}