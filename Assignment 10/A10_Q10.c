 // Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int f;
    printf("Testing of various arithemetic operations-2\n");

    f=2/9;
    printf("1. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=2.0/9;
    printf("2. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=2/9.0;
    printf("3. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=2.0/9.0;
    printf("4. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=9/2;
    printf("5. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=9.0/2;
    printf("6. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=9/2.0;
    printf("7. Value of float f is %f\n",f);      //Value of integer i is 0.000000

    f=9.0/2.0;
    printf("8. Value of float f is %f\n",f);      //Value of integer i is 0.000000
    return 0;
}