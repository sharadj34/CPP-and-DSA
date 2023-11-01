#include <bits/stdc++.h>
using namespace std;

void updated (int arr[] , int n)
{
    cout << "Inside the function" << endl;
    arr[0] = 120;
    for(int i=0 ; i<n ; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[3] = {3,2,1};

    updated(arr,3);

    cout << "Printing in main function" << endl;
    for(int i=0 ; i<3 ; i++)
    cout << arr[i] << " ";
    cout << endl;
    return 0;
} 


