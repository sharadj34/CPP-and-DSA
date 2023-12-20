#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    
    print(n-1);
    cout << n << endl;

}

void printR(int n)
{
    if(n==0)
    {
        return;
    }

    cout << n << endl;
    printR(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << endl;
    print(n);
    cout << endl;
    printR(n);

    return 0;
}