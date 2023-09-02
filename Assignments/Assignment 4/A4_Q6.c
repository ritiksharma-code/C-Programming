// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int kms, metre;
    printf("Enter the distance between two cities: ");
    scanf("%d", &kms);
    metre=kms*1000;
    printf("The length in metres is %d", metre);
    return 0;
}