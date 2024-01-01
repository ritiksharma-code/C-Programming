#include <iostream>
using namespace std;

int stairs(int n)
{
    // Base Case
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    
    // Recursive Call
    int ans = stairs(n-1)+stairs(n-2);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ans = stairs(n);
    cout<<ans<<endl;
    return 0;
}