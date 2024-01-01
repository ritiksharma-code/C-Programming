// By using only one pointer:
#include <iostream>
using namespace std;

void reverseString(string& name, int i, int n)
{
    // cout<<"Call recieved for: "<<name<<endl;
    // Base case
    if(i>(n-i-1))
        return;

    swap(name[i], name[n-i-1]);
    i++;

    // Recursive call
    reverseString(name, i, n-i-1);
}

int main()
{
    string name = "ritik";
    int size = 5;
    cout<<endl;
    reverseString(name, 0, size);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}

// By using two pointers:

/* 
#include <iostream>
using namespace std;

void reverseString(string& name, int i, int j)
{
    // cout<<"Call recieved for: "<<name<<endl;
    // Base case
    if(i>j)
        return;

    swap(name[i], name[j]);
    i++;
    j--;

    // Recursive call
    reverseString(name, i, j);
}

int main()
{
    string name = "ritik";
    cout<<endl;
    reverseString(name, 0, name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}
 */