//Program to count number of digits of a number.

#include <stdio.h>
int main()
{
    int n,counter=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n>0){
        n=n/10;
      counter++;
    }
    printf("%d",counter);
    return 0;
}