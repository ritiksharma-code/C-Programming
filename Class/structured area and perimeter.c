#include <stdio.h>;
int main()
{
	rectangle();
	square();
	circle();
	
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
