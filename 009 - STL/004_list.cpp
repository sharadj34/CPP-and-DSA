#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    
    list<int> n(5,100);

    for(int i:n)
    {
        cout << i <<" ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l)
    {
        cout << i <<" ";
    }
    cout << endl;

    l.erase(l.begin()); // Time complexity is O(n). erases element one by one
    cout << "AFTER ERASE : " << endl;
    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "SIZE OF LIST : " << l.size() << endl;

    return 0;
}