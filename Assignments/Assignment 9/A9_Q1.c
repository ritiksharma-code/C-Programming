// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int num1, num2, great;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2)
    {
        printf("%d is greater than %d.\n", num1,num2);
    }
    else if(num1<num2)
    {
        printf("%d is greater than %d.\n",num2,num1);
    }
    if(num1>=500&&num1<1000)
    {
        printf("%d", num1);
    }
    else if(num2>=500&&num2<1000)
    {
        printf("%d", num2);
    }
    else
    {
        printf("Invalid Entry!");
    }
    return 0;
}