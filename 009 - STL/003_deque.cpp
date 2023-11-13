#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);

    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    cout << "ELEMENT AT 1st INDEX : " << d.at(1) << endl;

    cout << "FIRST ELEMENT : " << d.front() << endl;

    cout << "LAST ELEMENT : " << d.back() << endl;

    d.erase(d.begin() , d.begin()+1);

    return 0;
}