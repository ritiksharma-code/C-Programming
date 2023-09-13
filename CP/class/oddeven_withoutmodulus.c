//BIT MANIPULATION

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n&1)
    {
        printf("ODD!");
    }
    else
    {
        printf("EVEN!");
    }
   return 0;
}