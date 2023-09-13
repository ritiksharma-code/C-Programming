#include <stdio.h>
int main()
{
    int b,height, weight, count=0, i=0;
    printf("Enter the number of boys: ");
    scanf("%d", &b);
    while(i<b)
    {
        scanf("%d %d", &weight, &height);
        if(weight<=50&&height>=170)
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}