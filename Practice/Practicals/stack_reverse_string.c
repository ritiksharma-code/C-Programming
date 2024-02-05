#include <stdio.h>
#include <string.h>

#define max 100
int top=-1, stack[max];

void push(char name) {
    if (top == max - 1) {
        printf("stack overflow");
    } else {
        stack[++top] = name;
    }
}

void display() {
    printf("%c", stack[top--]);
}

int main() {
    char str[max];
    printf("Enter a string: ");
    gets(str); // Input the string from the user (not recommended for production)

    int len = strlen(str);
    int i;

    for (i = 0; i < len; i++)
        push(str[i]);

    for (i = 0; i < len; i++)
        display();
}