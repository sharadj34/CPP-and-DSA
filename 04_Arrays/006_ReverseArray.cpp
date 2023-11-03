#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter size of array" << endl;
    int size;
    cin >> size;

    cout << "Enter array elements" << endl;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    cin >> arr[i]; 

    int start = 0;
    int end = size-1;
    int t;

    for(int i=0 ; i<size ; i++)
    {
        if(start < end)
        {
            swap(arr[start] , arr[end]);

            start ++;
            end --;
        }
    }

    cout << "REVERSE ARRAY IS" << endl;
    for(int i=0 ; i<size ; i++)
    cout << arr[i] << " ";
}