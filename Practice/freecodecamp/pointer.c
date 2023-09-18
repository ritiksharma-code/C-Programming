#include <stdio.h>
int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 9.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("Age's memory address: %p\n", &age);
    return 0;
}