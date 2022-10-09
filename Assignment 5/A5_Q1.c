// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int basic, allowance, rent, gross;
    printf("Enter Basic salary: ");
    scanf("%d", &basic);
    allowance=basic*40/100;
    rent=basic*20/100;
    gross=basic+allowance+rent;
    printf("The gross salary is %d", gross);
    return 0;
}