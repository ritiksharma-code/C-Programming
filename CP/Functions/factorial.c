// Factorial Program using functions, arguements.

#include <stdio.h>
int fact(int);
int main()
{
    int num,ans;
    printf("Enter the number: ");
    scanf("%d", &num);
    ans = fact(num);
    printf("The factorial is %d.", ans);
    return 0;
}

int fact(int x)
{
    int y=1;
    while(x>0)
    {
        y=x*y;
        x--;
    }
    return y;
}