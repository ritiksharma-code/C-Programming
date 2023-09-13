#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="ABCDABCD";
    char c[20];
    char b[]="BCDA";
     int x=strstr(b,a);
    if (x==0){
        printf("yes");
    }
    
}