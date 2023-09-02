// GCD - Greatest Common Diviser
// HCF/Long Division
// Much efficient and faster and taked less iterations.

#include <stdio.h>
int main()
{
    int a, b, r, swap;
    printf("Enter the numbers: \n");
    scanf("%d%d", &a, &b);
    
    if(a<b)
    {
        swap=b;
        b=a;
        a=swap;
    }

    while(b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    printf("GCD is: %d.", a);
    return 0;
}