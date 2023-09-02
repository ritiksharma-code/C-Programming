// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int feet, inch;
    printf("Enter the height of the student: ");
    scanf("%d", &feet);
    inch=feet*12;
    printf("The length in metres is %d", inch);
    return 0;
}