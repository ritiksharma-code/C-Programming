//basic code for goto statements
//goto is a unconditional jump statement

#include <stdio.h>
int main()
{
    int num=1;
    start:
        {
            printf("\nHello World!");
            num++;
        }
    if(num<=5)
    {
        goto start;
    }
    return 0;
}