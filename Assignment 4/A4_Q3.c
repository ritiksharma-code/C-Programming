// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num1, num2, mult;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered %d and %d.", num1, num2);
    mult=num1*num2;
    printf("\nThe sum of both numbers is %d.", mult);
    return 0;
}