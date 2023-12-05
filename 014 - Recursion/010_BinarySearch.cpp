#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int s, int e, int k)
{
    if(s>e)
    return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
    return true;

    if(arr[mid] < k)
    {
        return BinarySearch(arr, mid+1, e, k);
    }
    else
    {
        return BinarySearch(arr, s, mid-1, k);
    }

}

int main()
{
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 16;

    bool ans = BinarySearch(arr, 0, size-1, key);

    if(ans)
    cout << "ELEMENT IS PRESENT" << endl;
    else
    cout << "ELEMENT NOT PRESENT" << endl;

    return 0;
}