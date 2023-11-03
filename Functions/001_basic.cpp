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