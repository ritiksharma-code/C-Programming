#include <stdio.h>

struct student
{
    int roll_number;
    char name[30];
};

int main()
{
    struct student s, *ptr;     // datatype of pointer should be same as structure variable
    ptr=&s;
    printf("Enter roll number and name: ");
    scanf("%d", &ptr->roll_number);         // Whenever we use pointer with a user defined datatype the we will not use '.' operator, we will use arrow '->' operator.
    fflush(stdin);
    gets(ptr->name);

    printf("\nRoll number: %d\nName: %s", ptr->roll_number, ptr->name);
    return 0;
}