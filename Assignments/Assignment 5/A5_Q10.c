// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int english, hindi, maths, science, social,total, percentage;
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
    percentage=(english+hindi+maths+science+social)/total*100;
    printf("The percentage marks of the student is %d.", percentage);
    return 0;
}
