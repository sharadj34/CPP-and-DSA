#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        char ch = 'A' + i;
        for(int j=0;j<=i;j++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
}


/* 
OUTPUT
A
B B
C C C
D D D D
E E E E E
*/