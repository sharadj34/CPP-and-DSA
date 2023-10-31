// FOR LOOP
#include <iostream>
using namespace std;
int main()
{
    int i;
    // simple loop
    for (i = 1; i<=5; i++)
    {
        cout << "Sharad" << " " << i << endl;
    }

    // reverse loop
    for (i = 5; i>=1; i--)
    {
        cout << "Sharad" << " " << i << endl;
    }

    return 0;
}


// WHILE LOOP
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i<=5)
    {
        cout << "Sharad" << " " << i << endl;
        i+=1;
    }
    return 0;
}


// DO-WHILE LOOP
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    do
    {
        cout << "Sharad" << " " << i << endl;
        i+=1;
    }
    while (i<=5);
    return 0;
} 


// Fibonacci Series
// 0,1,1,2,3,5,8,13,21,........
// n = (n-1) + (n-2)

#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int n =10;
    cout << a << " " << b << " ";
    for(int i=1;i<=n;i++)
    {
        int nextn = a+b;
        cout << nextn << " ";

        a=b;
        b=nextn;
    }
}