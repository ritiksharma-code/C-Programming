#include <stdio.h>
#include <string.h>
int main()
{
    char a[15];
    printf("Enter the number: ");
    gets(a);
    char b[15];
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("Palindrome!");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}