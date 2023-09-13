#include <stdio.h>
int main()
{
	int length;
	int breadth;
	printf("Enter the length ");
	scanf("%d",&length);
	printf("Enter the breadth ");
	scanf("%d",&breadth);
	printf("The length is %d and breadth is %d.\n", length, breadth);
	int area;
	area=length*breadth;
	printf("The area of rectangle is %d.", area);
	
	return 0;
}
