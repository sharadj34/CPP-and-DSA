#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0 ; i<size ; i++)
    {
        cout << a[i] << endl;
    }

    cout << "ELEMENT AT 2nd INDEX : " << a.at(2) << endl;

    cout << "EMPTY OR NOT : " << a.empty() << endl;

    cout << "FIRST ELEMENT : " << a.front() << endl;

    cout << "LAST ELEMENT : " << a.back() << endl;

    return 0;
}