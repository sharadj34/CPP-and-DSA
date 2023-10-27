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


void explainDeque()
{
    deque<int>dq;
    dq.push_back(1); // {1)
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // (4, 1, 2)
    dq.emplace_front(3); // {3, 4, 1, 2)
    
    dq.pop_back(); // {3, 4, 1)
    dq.pop_front(); // (4, 1)
    
    dq.back();
    
    dq.front();
    //rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}


void explainStack()
{
    stack<int> st;

    st.push(11); // {11}
    st.push(12); // {12,11}
    st.push(13); // {13,12,11}
    st.push(10); // {10,13,12,11}
    st.emplace(30); // {30,10,13,12,11}

    cout << st.top(); // prints 30
    // No indexing concept is used in stacks

    st.pop(); // st looks like {10,13,12,11}

    cout << st.top(); // 10
    cout << st.size(); // 4
    cout << st.empty(); // checks if it is empty or not. returns true or false

    stack<int> st1,st2;
    st1.swap(st2);
}


void explainQueue() 
{
    queue<int> q;
    q. push(1); // (1)
    q. push(2); // (1, 2)
    q. emplace(4); // (1, 2, 4)
    
    q.back() += 5;
    
    cout << q.back(); // prints 9
    
    // Q is {1, 2, 9}
    cout << q. front(); // prints 1
    
    q.pop(); // {2, 9)
    
    cout << q.front(); // prints 2
    // size swap empty same as stack
}


void explainPQ()
{
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<<pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // prints 8

    // size, swap, empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2
}


void explainSet()
{
    // It stores everything in the sorted order and unique
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // Functionality of insert can be also used in vector also, that only increases efficiency
    // begin() , end() , rbegin() , rend() , size() , empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5}
    auto it = st.find(6); // If an element is not there in the set it always returns st.end()

    // {1,2,3,4}
    st.erase(5); // erases 5, it takes logarithmic time

    int cnt = st.count(1); // if 1 exists in the set it will return 1 otherwise 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} [first, last)

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}


void explainMultiSet()
{
    // Everything is same as set, only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); 

    ms.erase(ms.find(1)); // only a single one erased

    ms.erase(ms.find(1), ms.find(1+2));

    // rest all functions are same as set
}

int main()
{
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    return 0;
}