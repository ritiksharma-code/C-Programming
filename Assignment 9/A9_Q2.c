// Author: Ritik Sharma

#include <stdio.h>
void report();
int main()
{
    report();
    return 0;
}

void report()
{
    int english, hindi, maths, science, social,total,obtained, percentage;
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
    if(percentage>=33&&percentage<100)
    {
        printf("PASSED!");
        printf("\nThe total marks is %d.", obtained);
    }
    else if (percentage<33)
    {
        printf("FAILED!");
    }
}