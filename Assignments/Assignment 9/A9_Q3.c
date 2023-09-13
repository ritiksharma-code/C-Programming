// Author: Ritik Sharma

#include <stdio.h>

void oddeven();

int main()
{
    oddeven();
    return 0;
}

void oddeven()
{
    int num1;
    printf("Enter the number: ");
    scanf("%d", &num1);
    if(num1%2==0)
    {
        printf("\nThe number is even.");
        if(num1%3==0)
        {
            printf("\nThe number is divisible by 3.");
        }
        else
        {
            printf("\nThe number is not divisible by 3.");
        }
        if(num1%2==0)
        {
            printf("\nThe number is divisible by 2.");
        }
        else
        {
            printf("\nThe number is not divisible by 2.");
        }
    }
    else
    {
        printf("The number is odd.");
        if(num1%5==0)
        {
            printf("\nThe number is divisible by 5.");
        }
        else
        {
            printf("\nThe number is not divisible by 5.");
        }
    }
}