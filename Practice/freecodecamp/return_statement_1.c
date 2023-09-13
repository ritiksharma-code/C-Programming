#include <stdio.h>
int max (int num1, int num2)
{
    int result;
    if(num1>num2)
    {
        result=num1;
    }
    else if(num1<num2)
    {
        result=num2;
    }
    else if(num1==num2)
    {
        result=69;
    }
    return result;
}

int main()
{
    int num1,num2;
    scanf("%d%d", &num1, &num2);
    printf("%d", max(num1,num2));
    return 0;
}