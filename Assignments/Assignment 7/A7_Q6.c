// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    if(value%2==0)
    {
        printf("Even Number.");
    }
    else
    {
        printf("Odd NUmber.");
    }
    return 0;
}