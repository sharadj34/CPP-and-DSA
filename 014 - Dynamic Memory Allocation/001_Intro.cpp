#include<iostream>
using namespace std;

void update1(int n)
{
    n++;
}

void update2(int& n)
{
    n++;
}

// BAD PRACTICE
int& func(int a)
{
    int num = a;
    int& ans = num;
    return ans;
}

int main()
{   
    int i = 5;
    // create a reference variable
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 5;
    cout << "BEFORE update1: " << n << endl;
    update1(n);
    cout << "AFTER update1: " << n << endl;
    cout << endl;
    cout << "BEFORE update2: " << n << endl;
    update2(n);
    cout << "AFTER update2: " << n << endl;

    return 0;
}