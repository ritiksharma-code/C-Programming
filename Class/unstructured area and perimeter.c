#include <stdio.h>
int main()
{
	int alength,abreadth,arectangle;
	printf("Enter the length and breadth ");
	scanf("%d %d", &alength, &abreadth);
	printf("The length is %d and the breadth is %d.\n", alength, abreadth);
	arectangle=alength*abreadth;
	printf ("The area of rectangle is %d.", arectangle);
	
	int sides,aside;
	printf("\n\nEnter the side of the square ");
	scanf("%d", &sides);
	printf("The side of the square is %d.\n", sides);
	aside=sides*sides;
	printf("The area of the square is %d.",aside);
	
	int radius,acircle;
	printf("\n\nEnter the radius of the circle ");
	scanf("%d", &radius);
	printf("The radius of the circle is %d", radius);
	acircle=3*radius*radius;
	printf("\nThe area of the circle is %d", acircle);
	
	int plength,pbreadth,prectangle;
	printf("\n\nEnter the length and breadth of the rectangle ");
	scanf("%d %d", &plength, &pbreadth);
	printf("The length is %d and the breadth is %d.", plength, pbreadth);
	prectangle=2*plength+2*pbreadth;
	printf("\nThe perimeter of the rectangle is %d \n", prectangle);
	
	int pside,psquare;
	printf("\n\nEnter the side of the square ");
	scanf("%d", &pside);
	printf("The side of the square is %d.",pside);
	psquare=4*pside;
	printf("\nThe perimeter of the square is %d",psquare);
	
	int radiusc, circumference;
	printf("\n\nEnter the radius of the circle ");
	scanf("%d", &radiusc);
	printf("The radius of the circle is %d", radiusc);
	circumference=2*3*radiusc;
	printf("The circumference of the circle is %d",circumference);
	
	
	return 0;
}
