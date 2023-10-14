// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// arrays are always passed by reference automatically



#include <iostream>
using namespace std;
void printname(string n)
{
    cout<< "hey " << n;
}
int main()
{
    string name;
    cin>>name;
    printname(name);
    return 0;
}


// TAKE TWO NUMBERS AND PRINT THEIR SUM
#include <iostream>
using namespace std;
int printsum(int c,int d)
{
    return c+d; 
}
int main()
{
    int a,b;
    cin >> a >> b;
    int res = printsum(a,b);
    cout << res; 
    return 0;
}


// PASS BY VALUE
#include <iostream>
using namespace std;
void dosomething(int num) // copy of num was made
{
    cout << num << endl; // prints 10
    num+=5;
    cout << num << endl; // prints 15
    num+=5;
    cout << num << endl; // prints 20
}
int main()
{
    int num;
    cin >> num;
    dosomething(num);
    cout << num << endl; // again prints 10
    return 0;
}


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