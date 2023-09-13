#include <stdio.h>

// double cube(double num)    <-- prototype

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    int num1;
    printf("Enter a number to find its cube: ");
    scanf("%d", &num1);
    printf("Answer is: %f", cube(num1));
}

// If you want to write the function below the main function then you have to write a prototype of that function.