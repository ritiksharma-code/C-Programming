// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,b,c,ans;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    ans=(b*b)-(4*a*c);
    if(ans>0)
    {
        printf("Imaginary.");
    }
    else if(ans==0)
    {
        printf("Real and Equal.");
    }
    else
    {
        printf("Real and Unique.");
    }
    return 0;
}