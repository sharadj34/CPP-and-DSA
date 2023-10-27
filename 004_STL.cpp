/*
-> C++ STL is divided into 4 parts: Algorithms, Containers, Functions and Iterators.
-> Vector is a container which is dynamic in nature, which means we can change the size of the vector whenever we wish to.
*/

#include <bits/stdc++.h>
using namespace std;

// PAIRS
void explainPair()
{
    pair<int,int> p1 = {1,3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int,int>> p2 = {1,{3,5}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int,int> arr[] = {{1,2} , {2,5} , {5,1}};
    cout << arr[1].second;
}


// VECTORS
void explainVector()
{
    // declaring vector (this creates an empty container)
    vector<int> v;
    vector<int> v4;

    v.push_back(1);
    v.emplace_back(2); // it is generally faster than push_back

    vector<pair<int,int>> vec; // vector of pair datatype
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,100); // a contianer of size 5 is already defined with instances of 100 {100,100,100,100,100}

    vector<int> v2(v1); // copy of v1 in v2

    cout << v[0] << endl; // access elements

    // Iterators
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    it = it+2;
    cout << *(it) << " ";
    vector<int>::iterator i = v.end(); // it points to a memory location that is right after the last element of the vector.

    cout << v.back() << endl;

    int t;
    for(auto t = v.begin() ; t!=v.end() ; t++)
    {
        cout << *(t) << " ";
    }

    for(auto it : v)
    {
        cout << it << " ";
    }

    v.erase(v.begin() + 1); // delete single element

    v.erase(v.begin() + 2, v.begin() + 4); // delete multiple elements

    // Insert-function
    vector<int>v(2, 100); // {100, 100}
    v. insert (v.begin(), 300); // {300, 100, 100};
    v. insert (v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}
    
    vector<int> copy(2, 50); // {50, 50}
    v. insert (v.begin(), copy.begin(), copy.end ()); // {50, 50, 300, 10, 10, 100, 100}
    
    // {10, 20}
    cout << v. size(); // 2
    
    //{10, 20}
    v. pop_back(); // {10}

    // vl - {10, 20)
    // v2 -> (30, 40)
    v1.swap(v2); // v1 -> {30, 40), v2 -> {10, 20)
    
    v.clear(); // erases the entire vector
    cout << v.empty();
}


void explainList() 
{
    list<int> ls;
    ls.push_back(2); // (2)
    ls.emplace_back(4); // {2, 4)

    ls.push_front(5); // (5, 2, 4)

    ls.emplace_front(); // {2, 4}
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}


int main()
{
    explainPair();
    explainVector();
    explainList();
    return 0;
}