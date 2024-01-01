#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base case
    if(b==0)
        return 1;
    
    if(b==1)
        return a;

    int ans = power(a, b/2);    // Recursive call      

    if(b%2==0)      // If b is even
        return ans * ans;

    else
        return a * ans * ans;
}

int main()
{
    int a, b;
    cin>>a>>b;

    int ans = power(a,b);

    cout<<"Answer is: "<<ans<<endl;
    return 0;
}