#include <bits/stdc++.h> 
using namespace std;
void selectionSort(int arr[], int n)
{   
    for(int i=0 ; i<n-1 ;i++)
    {
        int minIndex = i;

        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
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