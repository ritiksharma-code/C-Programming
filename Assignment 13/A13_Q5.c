// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter your choice: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    {
        printf("Enter the sides of the triangle: ");
        scanf("%d %d %d", &a,&b,&c);
        if(a==b||b==c||c==a)
        {
            printf("The triangle is isosceles.");
        }
        else
        {
            printf("The triangle is not an isosceles triangle.");
        }
        break;
    }
    case 2:
    {
        printf("Enter the sides of the triangle: ");
        scanf("%d %d %d", &a,&b,&c);
        if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
        {
            printf("The triangle is right angled.");
        }
        else
        {
            printf("The triangle is not a right angled triangle.");
        }
        break;
    }
    case 3:
    {
        printf("Enter the sides of the triangle: ");
        scanf("%d %d %d", &a,&b,&c);
        if(a==b&&b==c)
        {
            printf("The triangle is Equilateral.");
        }
        else
        {
            printf("the triangle is not an equilateral triangle.");
        }
        break;
    }
    default:
    {
        printf("EXIT!");
        break;
    }
    }

    return 0;
}