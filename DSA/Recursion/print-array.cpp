#include <iostream>
using namespace std;

int printArray(int *arr, int size)
{
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    
    else
    {
        int ans = printArray(arr+1, size-1);
        cout<<ans;
        return ans;
    }

}

int main()
{
    int arr[5] = {2,4,6,8,11};
    int size = 5;

    int ans = printArray(arr, size);
    return 0;
}