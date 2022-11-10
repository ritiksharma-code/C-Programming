// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int year,n;
    printf("Enter the year: ");
    scanf("%d", &year);
    n=year%4==0;
    switch (n)
    {
    case 1:
    {
        printf("It is a leap year.");
        break;
    }
    
    default:
    {
        printf("It is not a leap year.");
        break;
    }
    }
    return 0;
}