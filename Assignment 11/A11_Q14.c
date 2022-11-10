// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,i,j;
    a=2;
    for(i=1;i<=10;i++)
    {
        j=a*i;
        printf("%d*%d=%d\n", a,i,j);
    }

    return 0;
}