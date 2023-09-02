// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num>0)
    {
        printf("Positive!");
    }
    else if(num==0)
    {
        printf("Zero!");
    }
    else
    {
        printf("Negative!");
    }
    return 0;
}