#include <bits/stdc++.h>
using namespace std;

bool search(int arr[] , int size , int key)
{
    for (int i=0 ; i<size ; i++)
    {
        if(key == arr[i])
        return true;
    }
    return false;
}

int main()
{
    cout << "Enter size of array" << endl;
    int size;
    cin >> size;

    cout << "Enter array elements" << endl;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    cin >> arr[i]; 

    cout << "Enter element to be searched" << endl;
    int key;
    cin >> key;

    // Whether key is present or not
    bool found = search(arr,size,key);

    if(found)
    cout << "KEY IS PRESENT";
    else
    cout << "KEY IS NOT PRESENT";
}