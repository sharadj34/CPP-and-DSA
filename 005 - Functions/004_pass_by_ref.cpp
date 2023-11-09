// PASS BY REFERENCE
#include <iostream>
using namespace std;
void dosomething(string &s)
{
    s[0] = 'n';
    cout << s << endl; // prints nharad
}
int main()
{
    string s = "sharad";
    dosomething(s);
    cout << s << endl; // again prints nharad
    return 0;
}