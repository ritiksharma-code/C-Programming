// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int cost, sell, profit, per;
    printf("Enter the cost price: ");
    scanf("%d", &cost);
    printf("Enter the selling price: ");
    scanf("%d", &sell);
    profit=sell-cost;
    per=100*(profit/cost);
    printf("The profit/loss percentage is %d", per);
    return 0;
}