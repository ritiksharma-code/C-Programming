// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int length, breadth, area;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    area=length*breadth;
    printf("The area of rectangle is %d.", area);
    return 0;
}