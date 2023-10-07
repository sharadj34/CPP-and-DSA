#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j+i-1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}

/*
Output:
1
23
345
4567
56789
*/