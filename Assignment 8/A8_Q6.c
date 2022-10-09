// Author: Ritik Sharma

#include <stdio.h>
int main()
{
    int M;
    printf("Enter the month number: ");
    scanf("%d", &M);
    if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12)
    {
        printf("31 Days");
    }
    else if(M==4 || M==6 || M==9 || M==11)
    {
        printf("30 Days");
    }
    else if(M==2)
    {
        printf("28 Days");
    }
    else
    {
        printf("Invalid!");
    }
    return 0;
}