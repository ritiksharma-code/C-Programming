// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    while(a>=0)
    {
        if(a%2==0)
        {
        }
        else
        {
            printf("%d ", a);
        }
        a--;
    }
    
    return 0;
}