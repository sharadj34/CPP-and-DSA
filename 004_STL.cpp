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
}

int main()
{
    explainPair();
    explainVector();
    return 0;
}