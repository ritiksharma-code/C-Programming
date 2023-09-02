// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int kms, milli;
    printf("Enter the distance between two cities: ");
    scanf("%d", &kms);
    milli=kms*1000000;
    printf("The length in metres is %d", milli);
    return 0;
}