// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int length, breadth, peri;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    peri=2*length+2*breadth;
    printf("The perimeter of rectangle is %d.", peri);
    return 0;
}