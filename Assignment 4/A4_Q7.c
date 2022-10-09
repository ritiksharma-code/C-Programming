// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int kms, centi;
    printf("Enter the distance between two cities: ");
    scanf("%d", &kms);
    centi=kms*100000;
    printf("The length in metres is %d", centi);
    return 0;
}