// CALL BY REFERENCE

/*#include <stdio.h>
int main()
{
    int arr[2]={5,10};
    printf("%d %d", *(0+arr), *(1+arr));
}*/



//CALL BY REFRENCE CAN CHANGE THE VALUE INSIDE THE ARRAY USING ARGUEMENTS AND PARAMETERS

void change(int[]);
#include <stdio.h>
int main()
{
    int arr[2]={5,10};
    change(arr);
    for(int i=0;i<2;i++)
    {
        printf("\n%d", arr[i]);
    }
}
void change(int x[])
{
    for(int i=0;i<2;i++)
    {
        x[i]=x[i]+5;
    }
}