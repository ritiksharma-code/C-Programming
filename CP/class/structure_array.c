#include <stdio.h>

struct student
{
    int roll_no;
    char name[30];
};

int main()
{
    struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the roll number and name: ");
        scanf("%d", &s[i].roll_no);
        fflush(stdin);
        gets(s[i].name);
    }
    for(i=0;i<3;i++)
    {
        printf("\n------------------");
        printf("\nRoll Number: %d", s[i].roll_no);
        printf("\nName is: %s", s[i].name);
    }
    return 0;
}