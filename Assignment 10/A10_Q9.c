// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int i;
    printf("Testing of various arithemetic operations-2\n");

    i=2/9;
    printf("1. Value of integer i is %d\n",i);      //Value of integer i is 0

    i=2.0/9;
    printf("2. Value of integer i is %d\n",i);      //Value of integer i is 0

    i=2/9.0;
    printf("3. Value of integer i is %d\n",i);      //Value of integer i is 0

    i=2.0/9.0;
    printf("4. Value of integer i is %d\n",i);      //Value of integer i is 0

    i=9/2;
    printf("5. Value of integer i is %d\n",i);      //Value of integer i is 4

    i=9.0/2;
    printf("6. Value of integer i is %d\n",i);      //Value of integer i is 4

    i=9/2.0;
    printf("7. Value of integer i is %d\n",i);      //Value of integer i is 4

    i=9.0/2.0;
    printf("8. Value of integer i is %d\n",i);      //Value of integer i is 4
    return 0;
}