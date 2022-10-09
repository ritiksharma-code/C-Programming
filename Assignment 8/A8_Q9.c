// Author: Ritik Sharma

#include <stdio.h>

int main()
{
	int num1, num2;
    printf("Enter the number: ");
    scanf("%d", &num1);
    num2=num1%10;
    printf("The unit digit of %d is %d.", num1, num2);
    return 0;
}
