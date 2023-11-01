#include <iostream>
using namespace std;

int main() {
    cout << "Enter array size:" << endl;
    int size;
    cin >> size;
    
    cout << "Enter array elements:" << endl;
    int arr[size];
    for(int i=0 ; i<size ; i++)
    cin >> arr[i];
    
    for(int i=0 ; i<size ; i+=2)
    {
        if((i+1) < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
    cout << "Swapped Array:" << endl;
    for(int i=0 ; i<size ; i++)
    cout << arr[i] << " ";
    return 0;
}