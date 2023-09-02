// Author: Ritik Sharma

void bill();

#include <stdio.h>
int main()
{
    bill();
    return 0;
}

void bill()
{
    int n,q;
    printf("1. Burgers\n2. French Fries\n3. Pizza\n4. Sandwitches\n");
    printf("Enter your choice: ");
    scanf("%d", &n);
    
    
    switch (n)
    {
    case 1:
    {
        printf("Enter the quantity: ");
        scanf("%d", &q);
        printf("Burgers: 200 * %d = %d", q,200*q);
        break;
    }
    case 2:
    {
        printf("Enter the quantity: ");
        scanf("%d", &q);
        printf("French Fries: 50 * %d = %d", q,50*q);
        break;
    }
    case 3:
    {
        printf("Enter the quantity: ");
        scanf("%d", &q);
        printf("Pizza: 500 * %d = %d", q,500*q);
        break;
    }
    case 4:
    {
        printf("Enter the quantity: ");
        scanf("%d", &q);
        printf("Sandwitches: 150 * %d = %d", q,150*q);
        break;
    }
    
    default:
    {
        printf("Enter some valid choice.");
        break;
    }
    }

}