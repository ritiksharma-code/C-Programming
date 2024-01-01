#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string name, int i, int j)
{
    // Base Case
    if(i>j)
        return true;

    if(name[i] != name[j])
        return false;
    
    // Recursive Call
    else
        isPalindrome(name, i+1, j-1);


}

int main()
{
    string name = "abbccbba";
    
    bool ans = isPalindrome(name, 0, name.length()-1);

    if(isPalindrome)
        cout<<"Palindrome number"<<endl;

    else
        cout<<"Not a Palindrome number"<<endl;
    return 0;
}