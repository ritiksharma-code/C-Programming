#include <iostream>
using namespace std;

void print(int n)
{
    // Base Case
    if(n==0)
        return;

    cout<<n<<endl;      // If this is before then tail recursion
    // Input: 5
    // Output: 5 4 3 2 1
    
    // Recursive relation
    print(n-1);

    // cout<<n<<endl;      // If this is after then head recursion
    // Input: 5
    // Output: 1 2 3 4 5 
} 

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);

    return 0;
}