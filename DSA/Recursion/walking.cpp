#include <iostream>
using namespace std;

void reachHome(int source, int destination)
{
    cout<<"source "<<source<<" destination "<<destination<<endl;
    // Base Case
    if(source==destination)
    {
        cout<<"Reached Home"<<endl;
        return;
    }
    // Processing - move one step ahead
    source++;

    // Recursive Call
    reachHome(source, destination);
}

int main()
{
    int destination = 10;
    int source = 1;

    reachHome(source, destination);
    return 0;
}