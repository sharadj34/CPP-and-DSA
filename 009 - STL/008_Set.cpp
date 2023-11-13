// It stores everything in the sorted order and unique

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5); // O(log n)
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(2);
    s.insert(0);
    s.insert(2);

    // 0 1 2 5 6  
    for(auto i:s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int> ::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i:s)
    {
        cout << i << endl;
    }

    cout << endl;

    cout <<"NUMBER IS PRESENT OR NOT : " << s.count(-5) << endl;

    set<int> ::iterator itr = s.find(5);

    cout << "VALUE PRESENT AT itr : " << *itr << endl;

    return 0;
}


/* Multiset -> Everything is same as set, only stores duplicate elements also */


/*Unique Set -> Everything unique but does not store in a sorted order.

lower_bound and upper_bound functions does not work, rest all functions are same as above, it does not store in any particular order it has a better complexity than set in most cases, excpet some when collision happens 

In almost all the cases the time complexity of Unordered set ig O(1), it's very very much rare the time complexity would be O(N) in worst case */