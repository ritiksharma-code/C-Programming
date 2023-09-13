//Printing binary in 8 bits

#include <stdio.h>
int main()
{
    int n,x=128,a;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=0;i<=7;i++)
    {
        a=n&x;
        x=x>>1;
       if(a==0)    
        {
            printf("0 ");
        }
        else
        {
            printf("1 ");
        }
    }
    return 0;
}