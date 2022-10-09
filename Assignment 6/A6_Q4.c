// Author: Ritik Sharma

#include <stdio.h>

int main()
{
    int kms, centi, milli, inches;
    printf("Enter the distance in Kilometers: ");
    scanf("%d", &kms);
    centi=kms*100000;
    milli=kms*1000000;
    inches=kms*39370;
    printf("The distance in centimeter is %d", centi);
    printf("The distance in millimeters is %d", milli);
    printf("The distance in inches is %d", inches);
    return 0;
}