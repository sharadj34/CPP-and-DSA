#include<iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << "VALUE AT NUM IS: " << num << endl; // 5

    // addressOf operator - &
    cout << "ADDRESS OF NUM IS: " << &num << endl; // 0x61ff04

    int *ptr = &num;

    cout << "ADDRESS OF NUM USING ptr IS: " << ptr << endl; // 5

    cout << "VALUE OF NUM USING *ptr IS: " << *ptr << endl; // 0x61ff04

    double d = 4.3;
    double *p2 = &d;

    // we can also initialize as
    double *q = 0;
    q = &d;

    cout << "ADDRESS OF d USING p2 IS: " << p2 << endl; // 0x61fef8

    cout << "VALUE OF d USING *p2 IS: " << *p2 << endl; // 4.3

    cout << "Size of integer is: " << sizeof(num) << endl; // 4
    cout << "Size of integer pointer is: " << sizeof(ptr) << endl; // 4

    cout << "Size of double is: " << sizeof(d) << endl; // 8
    cout << "Size of double pointer is: " << sizeof(p2) << endl; // 4

    // pointer to int is created, and pointing to some garbage address. We should not write like this
    int *p;

    int *r = &num;
    (*r)++;
    cout << "Value of num is: " << num << endl; // 6



    return 0;
}