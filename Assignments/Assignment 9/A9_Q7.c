// Author: Ritik Sharma

#include <stdio.h>

void Q7();

int main()
{
    Q7();
    return 0;
}

void Q7()
{
    int side1,side2,side3;
    printf("Enter all the side of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if(side1==side2&&side2==side3&&side3==side1)
    {
        printf("The triangle is Equilateral.");
    }
    else if(side1!=side2&&side2!=side3&&side3!=side1)
    {
        printf("The triangle is Scalene.");
    }
    else
    {
        printf("The triangle is Isosceles.");
    }
}
