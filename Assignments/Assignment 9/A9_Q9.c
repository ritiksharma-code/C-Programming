// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the number: ");
    scanf("%d", &num1);
    num2=num1%10;
    num3=num1%100;
    printf("The one's place is %d and the ten's place is %d.", num2, num3);

    return 0;
}