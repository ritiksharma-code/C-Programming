// Array using pointer
// Static Memory Allocation

#include <stdio.h>
int main()
{
    int a[5], *ptr;
    ptr=&a[0];
    printf("Enter 5 values:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", (ptr+i));       // Pointer Address Arithmetic (p+1)==(p+4), (depends on the datatype)
    }
    for(int i=0; i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}