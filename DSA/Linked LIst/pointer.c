// Pointer

#include <stdio.h>
int main()
{
    int a, *ptr;                                // '*' means "value on" and '&' means "address of"
    ptr=&a;
    scanf("%d", ptr);
    printf("The value on a is: %d", *ptr);      // ptr = &a, *ptr = *(&a) = a
    return 0;
}