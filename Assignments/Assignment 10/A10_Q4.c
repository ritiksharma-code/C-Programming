// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int i;
    float f;
    printf("Testing of various arithmetic operations\n");
    i=5.0/2/0;
    f=5.0/2.0;
    printf("Value of integer i is %d\n",i);     //-2147483648
    printf("Value of integer f is %f\n",f);     //2.500000
    return 0;
}