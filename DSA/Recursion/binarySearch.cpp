#include <iostream>
using namespace std;

void printArray(int *arr, int start, int end)
{
    cout<<endl;
    for(int i=start; i<=end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int *arr, int start,int end, int key)
{
    printArray(arr,start,end);

    // Base Case
    if(start>end)       // Element not found
        return false;

    int mid = start+(end-start)/2;

    if(arr[mid] == key) // Element found
        return true;

    if(arr[mid]<key)
    {
        return binarySearch(arr, mid+1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid-1, key);
    }
}

int main()
{
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;

    int ans = binarySearch(arr, 0, 5, key);

    if(ans)
        cout<<"Element found!"<<endl;

    else
        cout<<"Element not found!"<<endl;

    return 0;
}