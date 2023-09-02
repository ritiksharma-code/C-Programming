//Reverse the numbers and print the sum of it.

#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        sum=sum+i;
        printf("%d ", i);
    }
    printf("\nSum of numbers is: %d.", sum);
    return 0;
}