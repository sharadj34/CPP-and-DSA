#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    if(size == 0)
    return false;

    if(arr[0] == key)
    return true;

    else
    {
        bool a = LinearSearch(arr+1, size-1, key);
        return a;
    }
}

int main()
{
    int arr[5] = {3,5,1,2,6};
    int size = 5;

    int key = 4;

    bool ans = LinearSearch(arr, size, key);

    if(ans)
    cout << "ELEMENT IS PRESENT";
    else
    cout << "ELEMENT NOT PRESENT";

    return 0;
}