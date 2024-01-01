#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)   // int arr[] OR int *arr
{
    // Base Case
    if(size == 0 || size == 1)
        return true;

    if(arr[0]>arr[1])    
        return false;

    else
    {
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2,4,6,8,11};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
        cout<<"Array is not sorted"<<endl;
    return 0;
}