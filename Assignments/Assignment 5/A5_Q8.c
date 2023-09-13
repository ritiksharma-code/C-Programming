// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int side1, side2, side3, sum;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);
    sum=side1+side2+side3;
    printf("The sum of sides of the triangle is %d", sum);
    return 0;
}
