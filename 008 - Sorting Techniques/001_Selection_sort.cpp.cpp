/*
PROBLEM: Selection Sort

LINK: https://www.codingninjas.com/studio/problems/selection-sort_981162
*/

#include <bits/stdc++.h> 
using namespace std;
void selectionSort(int arr[], int n)
{   
    for(int i=0 ; i<n-1 ;i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[i])
            swap(arr[j] , arr[i]);
        }
    }
}

int main()
{
    cout << "Enter number of elements in array: " << endl;
    int n;
    cin >> n;

    cout << "Enter array elements: " << endl;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted array: " << endl;
    selectionSort(arr, n);
    for(int j=0 ; j<n ; j++)
    {
        cout << arr[j] << " ";
    }
}


/*
Enter number of elements in array: 
5
Enter array elements: 
64 25 12 22 11
Sorted array:
11 12 22 25 64
*/