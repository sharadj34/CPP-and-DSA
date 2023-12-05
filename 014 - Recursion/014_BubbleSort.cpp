#include <iostream>
using namespace std;

void sortArray(int* arr, int n)
{
    // base case - already sorted
    if(n == 0 || n == 1)
    return;

    // largest element sent to end
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        swap(arr[i], arr[i+1]);
    }

    sortArray(arr, n-1);
}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int size = 5;

    sortArray(arr, size);

    cout << "[ ";
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    
    return 0;
}