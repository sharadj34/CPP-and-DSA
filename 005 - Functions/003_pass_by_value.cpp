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