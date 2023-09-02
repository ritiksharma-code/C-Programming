/*12345678901234
2345678901234
345678901234
45678901234
5678901234
678901234
78901234
8901234
901234
01234
1234
234
34
4*/

#include <stdio.h>
int main()
{
    int n, i, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        a=i%10;
        printf("%d", a);
        for(int j=i+1;j<=n;j++)
        {
            a=j%10;
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}