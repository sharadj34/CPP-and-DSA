/*
Vector is a dynamic array. Whenever a vector gets filled and we want to add another value to it, it creates another vector of size double to the previous one and shifts all the elements to the new vector. 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // vector of size 5 and all the elemets are initialized by value 1
    vector<int> a(5,1); 

    // copying all the elements of vector a into vector b
    vector<int> b(a);

    // How much memory is allocated to the vector currently
    cout << "Capacity of v : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity of v : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of v : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity of v : " << v.capacity() << endl;
    cout << "Size of v : " << v.size() << endl;

    cout << "ELEMENT AT 2nd INDEX : " << v.at(2) << endl;

    cout << "FIRST ELEMENT : " << v.front() << endl;

    cout << "LAST ELEMENT : " << v.back() << endl;

    cout << "Before POP : " << endl;
    for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After POP : " << endl;
        for(int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    // Whenever we clear a vector, in that case the size of the vector becomes zero but the capacity remains the same
    cout << "SIZE BEFORE CLEAR : " << v.size() << endl;
    cout << "CAPACITY BEFORE CLEAR : " << v.capacity() << endl;

    v.clear();

    cout << "SIZE AFTER CLEAR : " << v.size() << endl;
    cout << "CAPACITY AFTER CLEAR : " << v.capacity() << endl;

    return 0;
}