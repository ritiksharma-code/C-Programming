// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area=3*radius*radius;
    printf("The area of the circle is %d", area);
    return 0;
}