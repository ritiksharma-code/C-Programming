// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int usd, inr, convert;
    inr=80;
    printf("Enter the price in usd: ");
    scanf("%d", &usd);
    convert=usd*inr;
    printf("The price converted in inr is %d.", convert);
    return 0;
}