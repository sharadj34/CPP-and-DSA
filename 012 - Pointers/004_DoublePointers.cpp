#include <iostream>
using namespace std;

void update (int **p2)
{
    p2 = p2 + 1; // No change

    *p2 = *p2 + 1; // p changed

    **p2 = **p2 + 1; // i changed
}

int main()
{
    int i = 5;
    int* p = &i;
    int** p2 = &p;


    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;
    cout << endl;


    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << endl;


    cout << &p << endl;
    cout << p2 << endl;
    cout << endl;


    cout << endl << endl;
    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl;
    cout << endl << endl;


    return 0;

}