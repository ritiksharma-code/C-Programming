#include <stdio.h>
int main()
{
    int n,i,j,sum=0,count=0,a;
    printf("Enter the numbers: ");
    scanf("%d %d",&a, &n);
    for(j=a;j<=n;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ", i);
            sum=sum+i;
            count++;
        }
    }
    printf("\nThe sum of numbers is %d.", sum);
    printf("\nThe count is %d.", count);
    return 0;
}