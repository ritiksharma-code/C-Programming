// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter the number of times you want to print HELLO WORLD: ");
    scanf("%d", &a);
    for(i=0;i<a;i++)
    {
        printf("HELLO WORLD! \n");
    }
    return 0;
}