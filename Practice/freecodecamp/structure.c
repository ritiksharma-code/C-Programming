#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    printf("The data of student 1: \n");
    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    return 0;
}