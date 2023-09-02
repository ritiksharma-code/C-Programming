// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num1, num2, div;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered %d and %d.", num1, num2);
    div=num1/num2;
    printf("\nThe sum of both numbers is %d.", div);
    return 0;
}