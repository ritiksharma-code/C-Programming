// Author: Ritik Sharma

#include <stdio.h>
void subject();
int main()
{
    subject();
    return 0;
}

void subject()
{
    int english, hindi, maths, science, social, obtained, passing, total, per;
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

    obtained=(english+hindi+maths+science+social);
    per=100*(obtained/total);
    
    if(per>=33)
    {
        printf("PASSED!");
    }
    else
    {
        printf("FAILED!");
    }
    }