#include <stdio.h>

struct student
{
    int roll_no;
    char name[30];
};

int main()
{
    struct student s;
    printf("Enter the roll number and name: ");
    scanf("%d", &s.roll_no);       // number + enterkey
    fflush(stdin);      // Used to clear the memory buffer else the enter key is going to assign to name
    gets(s.name);
    printf("\nRoll number is: %d", s.roll_no);
    printf("\nName is: %s", s.name);
    return 0;
}