#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            j+=1;
        }
        cout<<endl;
        count = count + 1;
        i+=1;
    }
    return 0;
}

/*
Output:
1
22
333
4444
*/