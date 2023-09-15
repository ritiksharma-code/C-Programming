#include <stdio.h>
#include <stdlib.h>

int main()
{
    // file modes: r (read), w (write), a (append)
    // FILE * fpointer = fopen("employees.txt", "w");
    FILE * fpointer = fopen("employees.txt", "a");
    // w is gonna overwrite all the text data in the file so if you want to keep the data and add something more then you have to use (append)
    fprintf(fpointer, "\nManas Parwani, Student\nHarshal Jain, Student");

    fclose(fpointer);
}