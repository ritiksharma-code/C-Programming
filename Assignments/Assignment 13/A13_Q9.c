// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,b,c,ans,i,j,k;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    ans=(b*b)-(4*a*c);
    
    switch (ans>0)
    {
    case 1:
    {
        printf("Imaginary.");
        break;
    }    
    default:
    {
        break;
    }
    }
    switch (ans==0)
    {
    case 1:
    {
        printf("Real and equal.");
        break;
    }    
    default:
    {
        break;
    }
    }
    switch (ans<0)
    {
    case 1:
    {
        printf("Real and unique.");
        break;
    }    
    default:
    {
        break;
    }
    }
    return 0;
}