#include <stdio.h>
int main()
{
    int a[5]={5,1,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    printf("%d %d %d", i,j,m);
    return 0;
}



#include <stdio.h>
int main()
{
    int arr[5], i=0;
    while(i<5)
    {
        arr[i]=++i;
        for(i=0;i<5;i++)
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[2]= {5,10};
    printf("%d\n%d", 0[arr], 1[arr]);
    return 0;
}