#include <stdio.h>
int main()
{
    int arr[10]={78,92,9,43,10}, n=5;
    int feq[10]={0};
    for(int i=0;i<n;i++)
    {
        while(arr[i])
        {
            feq[arr[i]%10]++;
            arr[i]/=10;
        }
    }
    for(int i=9;i>0;i--)
    {
        while(feq[i])
        {
            printf("%d", i);
            feq[i]--;
        }
    }
    return 0;
}