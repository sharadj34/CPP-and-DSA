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