#include <stdio.h>
int main()
{
    int amount,z,r;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    z=amount/500;
    printf("500 - %d",z);
    r=amount%500;
    if(r>=200)
    {
        z=r/200;
        printf("\n200 - %d",z);  
        r=z%200;      
    }
    if(r>=100)
    {
        z=r/100;
        printf("\n100 - %d",z);  
        r=z%100;      
    }
}