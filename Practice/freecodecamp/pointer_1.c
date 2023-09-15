#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    // printf("%p\n", pAge);
    /* We can derefrence a pointer by just adding a star before the pointer name in printf
    but now we have to write the datatype of the memory address variable. */
    printf("%d\n", *pAge);
    // printf("%d\n", *&age);
    //And now it's gonna print the number of that memory address.
    return 0;
}