#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};

    cout << "Address of first memory block: " << arr << endl;
    cout << "Address of first memory block: " << &arr[0] << endl;

    cout << "1st: " << *arr << endl;
    cout << "2nd: " << *(arr+1) << endl;
    cout << "3rd: " << *arr + 1 << endl;

    // arr[i] = *(arr+i)
    cout << "4th: " << *(arr+2) << endl;

    // i[arr] = *(i+ar)
    int i = 3;
    cout << "5th: " << i[arr] << endl;


    int temp[10] = {1,2};
    cout << "6th: " << sizeof(temp) << endl; // 40
    cout << "7th: " << sizeof(*temp) << endl; // 4
    cout << "8th: " << sizeof(&temp) << endl; // 4
    
    int *p = &temp[0];
    cout << "9th: " << sizeof(p) << endl; // 4
    cout << "10th: " << sizeof(*p) << endl; // 4
    cout << "11th: " << sizeof(&p) << endl; // 4

    int a[20] = {1,2,3,5};
    cout << "12th: " << &a[0] << endl; // 0x61fec0
    cout << "13th: " << &a << endl; // 0x61fec0
    cout << "14th: " << a << endl; // 0x61fec0

    int *p3 = &a[0];
    cout << "15th: " << p3 << endl; // 0x61feb0
    cout << "16th: " << *p3 << endl; // 1
    cout << "17th: " << &p3 << endl; // 0x61feac


    int arrr[10];
    // arrr = arrr + 1; (error)
    int *ptr3 = &arrr[0];
    cout << "18th: ptr3 before: " << ptr3 << endl; // 0x61fee4
    ptr3 = ptr3 + 1;
    cout << "19th: ptr3 after: " << ptr3 << endl; // 0x61fee8


    int arr1[5] = {1,2,3,4,5};
    char ch[6] = "abcde"; // ends with null character
    char *c = &ch[0];

    cout << "20th: " << arr1 << endl; // gives address
    cout << "21st: " << ch << endl; // gives entire content
    cout << "22nd: " << c << endl; // gives entire content
    cout << "23rd: " << &c << endl; // gives address of pointer

    return 0;
}