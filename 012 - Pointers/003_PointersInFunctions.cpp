#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p+1;
}

int getSum(int arr[], int n) // int *arr == int arr[] (pointer is passed instead of the whole array)
{
    cout << "Size of array: " << sizeof(arr) << endl;
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    print(p);
    cout << "Address Before: " << p << endl;
    cout << "Value Before: " << *p << endl;

    update(p);

    cout << "Adress After: " << p << endl;
    cout << "Value After: " << *p << endl;


    int arr[5] = {1,2,3,4,5};
    cout << "Sum is : " << getSum(arr, 5) << endl;

    return 0;
}