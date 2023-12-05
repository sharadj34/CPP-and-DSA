#include <iostream>
using namespace std;

void ReverseString(string& s, int i)
{
    int n = s.length();
    if(i>n-i-1)
    return;

    swap(s[i],s[n-i-1]);
    i++;

    ReverseString(s,i);
}

int main()
{
    string s = "abcde";
    ReverseString(s, 0);

    cout << s << endl;

    return 0; 
}