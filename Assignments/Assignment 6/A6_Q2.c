// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int english, hindi, maths, science, social,total,obtained, average, percentage;
    total=500;
    printf("Enter the marks obtained in english: ");
    scanf("%d", &english);
    printf("Enter the marks obtained in hindi: ");
    scanf("%d", &hindi);
    printf("Enter the marks obtained in maths: ");
    scanf("%d", &maths);
    printf("Enter the marks obtained in science: ");
    scanf("%d", &science);
    printf("Enter the marks obtained in social: ");
    scanf("%d", &social);
    obtained=english+hindi+maths+science+social;
    percentage=100*obtained/total;
    average=obtained/5;
    printf("The obtained marks are %d", obtained);
    printf("\nThe percentage marks of the student is %d.", percentage);
    printf("\nThe average marks are %d.", average);
    return 0;
}
