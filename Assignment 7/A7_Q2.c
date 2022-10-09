// Author: Ritik Sharma

#include <stdio.h>

void addition();
void subtraction();
void multiply();
void divide();

int main()
{   int ch;
    printf("Enter the choice:  ");
    scanf("%d", &ch);

    if(ch==1)
    {
        addition();
    }
    else if(ch==2)
    {
        subtraction();
    }
    else if(ch==3)
    {
        multiply();
    }
    else if(ch==4)
    {
        divide();
    }
    else if(ch==0)
    {
        printf("NO OPERATION");
    }
    return 0;
}

void addition()
{
    int a_num1, a_num2, add;
    printf("ADDITION\n");
    printf("Enter the first number: ");
    scanf("%d", &a_num1);
    printf("Enter the second number: ");
    scanf("%d", &a_num2);
    add=a_num1+a_num2;
    printf("The addition of both the numbers is %d", add);
}

void subtraction()
{
    int s_num1, s_num2, sub;
    printf("SUBTRACTION\n");
    printf("Enter the first number: ");
    scanf("%d", &s_num1);
    printf("Enter the second number");
    scanf("%d", &s_num2);
    sub=s_num1-s_num2;
    printf("The subtraction of both the numbers is %d", sub);
}

void multiply()
{
    int m_num1, m_num2, mult;
    printf("MULTIPLICATION\n");
    printf("Enter the first number: ");
    scanf("%d", &m_num1);
    printf("Enter the second number: ");
    scanf("%d", &m_num2);
    mult=m_num1*m_num2;
    printf("The multiplication of both the number is %d", mult);
}

void divide()
{
    int d_num1, d_num2, div;
    printf("DIVISION\n");
    printf("Enter the first number: ");
    scanf("%d", &d_num1);
    printf("Enter the second number: ");
    scanf("%d", &d_num2);
    div=d_num1/d_num2;
    printf("The multiplication of both the number is %d", div);
}