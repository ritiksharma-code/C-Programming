#include <stdio.h>
int main()
{
    int n=1,sum=0,i=0;
    printf("Enter the number: \n");
    while (n)
    {
        scanf("%d", &n);
        if(n==-1)
        {
            break;
        }
        sum=sum+n;
    }
    printf("The sum is %d.", sum);
    return 0;
}