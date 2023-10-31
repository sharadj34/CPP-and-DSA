// USING const KEYWORD
#include <iostream>
using namespace std;
int main()
{
    const int length = 10;
    const int width = 15;
    const char newline = '\n';
    int area = length * width;
    cout << area;
    cout << newline;
    return 0;
}