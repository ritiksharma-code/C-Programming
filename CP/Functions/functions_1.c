// FUCTIONS, Arguments, Parameters



/*#include <stdio.h>
void add();
int main()
{
    add();
    
    return 0;
}
void add(int a,int b, int c)
{  
    printf("Enter the values: \n");
    scanf("%d%d", &a, &b);
    c=a+b;
    printf("The added value is: %d", c);
}*/

/*#include <stdio.h>
int main()
{   int a,b, c;
    printf("Enter the values: \n");
    scanf("%d%d", &a, &b);
    sub(a,b);
    printf("The subtracted value is: %d", c);
}

int sub(a,b,c)
{
    c=a-b;
    return c;
}*/

#include <stdio.h>
int add();
int main()
{
    int sum = add();
    printf("The sum is: %d.", sum);
}
int add()
{
    int a=3, b=6;
    return a+b;
}
    


