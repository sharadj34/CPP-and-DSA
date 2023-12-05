#include <iostream>
using namespace std;

bool CheckPal(string& s, int i, int j)
{
    if(i>j)
    return true;

    if(s[i] != s[j])
    return false;

    else
    {
        return CheckPal(s, i+1, j-1);
    }
}

int main()
{
    string s = "abbccbba";
    cout << endl;

    bool isPal = CheckPal(s, 0, s.length()-1);

    if(isPal)
    cout << "STRING IS PALINDROME" << endl;

    else
    cout << "STRING IS NOT PALINDROME" << endl;

    return 0; 
}