// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d", &b);
    for(a=1;1<b;b--)
    {
        a=a*b;
    }
    printf("%d \n",a);
    return 0;
}