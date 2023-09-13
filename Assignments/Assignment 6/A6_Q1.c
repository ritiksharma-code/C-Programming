// Author: Ritik Sharma
#include <stdio.h>

void rectangle();
void square();
void circle();
void triangle();

int main()
{
	circle();
	rectangle();
	square();
    triangle();
	
	return 0;
}

void rectangle()
{
	int length, breadth, arectangle, prectangle;
	printf("Enter the length and breath of the rectangle ");
	scanf("%d %d", &length, &breadth);
	printf("The length is %d and breadth is %d", length, breadth);
	arectangle=length*breadth;
	prectangle=2*length+2*breadth;
	printf("\nThe area of rectangle is %d",arectangle);
	printf("\nThe perimeter of the rectangle is %d", prectangle);
}

void square()
{
	int side, asquare, psquare;
	printf("\n\nEnter the side of the square ");
	scanf("%d", &side);
	printf("The side of the square is %d.", side);
	asquare=side*side;
	psquare=4*side;
	printf("\nThe area of the square is %d.", asquare);
	printf("\nThe perimeter of the square is %d.", psquare);
}

void circle()
{
	int radius, acircle, circumference;
	printf("\n\nEnter the radius of the circle ");
	scanf("%d", &radius);
	printf("The radius of the circle is %d", radius);
	acircle=3*radius*radius;
	circumference=2*3*radius;
	printf("\nThe area of the circle is %d.", acircle);
	printf("\nThe circumference of the circle is %d.", circumference);
}

void triangle()
{
    int side1, side2, side3, sumt;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);
}