#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << binary_search(v.begin() , v.end() , 6) << endl;

    cout << "LOWER BOUND : " << lower_bound(v.begin() , v.end() , 6) - v.begin() << endl;

    cout << "UPPER BOUND : " << upper_bound(v.begin() , v.end() , 6) - v.begin() << endl;

    return 0;
}