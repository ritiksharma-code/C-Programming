// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int basic, allowance, gross;
    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    allowance=basic*40/100;
    gross=basic+allowance;
    printf("The gross salary is %d.",gross);
    return 0;
}