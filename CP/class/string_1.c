/*#include <stdio.h>
int main()
{
    char arr[]={'R', 'I', 'T', 'I', 'K', '\0'};
    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    char arr[]="RITIK";
    puts(arr);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char arr[]={'R', 'I', 'T', 'I', 'K', '\0'};
    puts(arr);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    
    scanf("%s", &arr);                      Only scans the first word
    
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    
    gets(arr);
    
    return 0;
}*/

/*#include <stdio.h>
int main()
{   char arr[50];
    printf("Enter your name: ");
    fgets(arr, 50, stdin);
    printf("\nHello %s", arr);
    return 0;
}*/

/*#include <stdio.h>
int main()
{   char arr[50];
    printf("Enter your name: ");
    scanf("%[^\n]", arr);           //for new line(can even use \t, for ctrl+z use ^^Z instead of ^\n)
    printf("\nHello %s", arr);
    return 0;
}*/

/*#include <stdio.h>
int main()
{   int rnum;
    char arr[50];
    printf("Enter your roll number and your name: ");
    scanf("%d", &rnum);
    scanf("%[^\n]", arr);           //for new line(can even use \t, for ctrl+z use ^^Z instead of ^\n)
    printf("\nRoll Number: %d", rnum);
    printf("\nHello %s", arr);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    char *s = "Smile you are learning new things";
    int n = 11;
    printf("%.*s", n, s);
    return 0;
}*/