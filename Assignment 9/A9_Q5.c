// Author: Ritik Sharma

#include <stdio.h>

void leap();

int main()
{
    leap();
    return 0;
}

void leap()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%4==0)
    {
        printf("The year is leap year.");
    }
    else
    {
        printf("The year is not a leap year.");
    }
}