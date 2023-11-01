#include <bits/stdc++.h>
using namespace std;
void givea(int a[], int size)
{
    cout << "Printing the array" << endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array printed" << endl;
}

int main()
{
    int n;
    cin >> n;
    int number[n];
    for(int j = 0 ; j<n ; j++)
    {
        cin >> number[j];
    }
    int s = sizeof(number)/sizeof(int);
    givea(number , 3);
    return 0;
}

