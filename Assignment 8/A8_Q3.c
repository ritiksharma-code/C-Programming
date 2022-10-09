// Author: Ritik Sharma

#include <stdio.h>
void divi();
int main()
{
    divi();
    return 0;
}

void divi()
{
    int num1;
    printf("Enter the number: ");
    scanf("%d", &num1);
    if(num1%2==0&&num1&3==0)
    {
        printf("The number is divisible by 3 and 2.");
    }
    else
    {
        printf("The number is not divisible by 3 and 2.");
    }
}