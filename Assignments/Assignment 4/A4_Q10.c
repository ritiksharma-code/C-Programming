// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int temp, centi;
    printf("Enter the temperature in Farenheit: ");
    scanf("%d", &temp);
    centi=(temp-32)*5/9;
    printf("The temperature in Centigrade is %d.", centi);
    return 0;
}