#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char start;
    for (int i=1; i<=n; i++)
    {
        start = 'A' + (n-1);
        for(int j=0; j<i; j++)
        {
            cout << start << " ";
            start--;
        }
        cout<<endl;
    }
}


/* 
OUTPUT
E 
E D 
E D C 
E D C B 
E D C B A
*/