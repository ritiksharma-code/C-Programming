// Dynamic Memory Allocation
// User can allocate the memory as per need

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    printf("Enter number of element: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    ptr=(int*)malloc(sizeof(int)*n);            // Malloc allocated void type so we have to use (int*) for typecasting it to integer
    for(int i=0;i<n;i++)
    {
        scanf("%d", (ptr+i));                   // Pointer Address Arithmetic (p+1)==(p+4), (depends on the datatype)
    }
    printf("You entered:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    free(ptr);                                  // Free up/delete the allocated memory to be more memory efficient    
    return 0;
}