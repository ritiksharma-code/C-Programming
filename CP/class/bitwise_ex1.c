//XOR Table

#include <stdio.h>
int main()
{
    int a=9, b=3,x;
    x=a|b;
    printf("%d ", x);

    x=a&b;
    printf("%d ", x);

    x=a^b;
    printf("%d ", x);
    return 0;
}