// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int english, hindi, maths, science, social, aggregate;
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
    aggregate=(english+hindi+maths+science+social);
    printf("The aggregate marks of the student is %d.", aggregate);
    return 0;
}
