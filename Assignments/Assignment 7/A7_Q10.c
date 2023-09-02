// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if((side1+side2)>side3)
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is invalid.");
    }
    
    return 0;
}