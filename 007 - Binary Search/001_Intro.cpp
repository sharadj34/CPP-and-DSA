#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    // int mid = (start + end)/2;
    int mid = start + ((end - start)/2);

    while(start <= end)
    {
        if(arr[mid] == key)
        return mid;

        if(key > arr[mid])
        start = mid + 1;

        else
        end = mid - 1;

        //mid = (start + end)/2;
        mid = start + ((end - start)/2);
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenindex = binarysearch(even, 6, 12);
    int oddindex = binarysearch(odd, 5, 8);
    cout << "Index of 12 is: " << evenindex << endl;
    cout << "Index of 8 is: " << oddindex << endl;
}


/*
OUTPUT -
Index of 12 is: 4
Index of 8 is: 1
*/