// We should not use global variable as it can be changed in any function and the change will be reflected everywhere

#include <iostream>
using namespace std;

int score = 15;

void a()
{
    cout << score << " in a" << endl;
}

void b()
{
    cout << score << " in b" << endl;
}

int main()
{
    cout << score << " in main" << endl;
    a();
    b();
    return 0;
}