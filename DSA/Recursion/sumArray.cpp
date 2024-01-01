#include <iostream>
using namespace std;

int sumArray(int *arr, int size)
{
    int sum=0;
    // Base Case
    if(size == 0)
        return 0;

    if(sum==1)
        return arr[0];
    
    // Process and Recursive Call

    else
    {
        int remainingPart = sumArray(arr+1, size-1);
        sum=sum+arr[0]+remainingPart;
        return sum;
    }
}

int main()
{
    int arr[5] = {2,4,6,8,11};
    int size = 5;

    int sum = sumArray(arr, size);

    cout<<"The sum of the array is: "<<sum<<endl;
    return 0;
}