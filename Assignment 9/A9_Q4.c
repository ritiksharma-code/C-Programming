// Author: Ritik Sharma

#include <stdio.h>
void Q4();
int main()
{
    Q4();
    return 0;
}

void Q4()
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    if(value>0)
    {
        printf("Positive Number.");
        if(value%10==0)
        {
            printf("\nThe number is divisible by 10.");
        }
        else
        {
            printf("\nThe number is not divisible by 10.");
        }
    }
    else
    {
        printf("Negative Number.");
    }
}