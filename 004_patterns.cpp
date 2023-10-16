// Patterns use nested loops
// For the outer loop, count the number of rows
// for the inner loop, focus on the columns and somehow connect them to the rows
// Whatever we are printing, print them inside the inner for loop
// Observe symmetry [optional - only applicable to certain patterns]



#include <iostream>
using namespace std;

/* 
PATTERN 1
****
****
****
****
*/
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;        
    }
}


/* 
PATTERN 2
*
**
***
****
*/
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;        
    }
}


/* 
PATTERN 3
1
1 2
1 2 3
1 2 3 4
*/
void print3(int n)
{
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;        
    }
}


/* 
PATTERN 4
1
2 2
3 3 3
4 4 4 4
*/
void print4(int n)
{
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout << endl;        
    }
}


/* 
PATTERN 5
* * * *
* * *
* *
*
*/
void print5(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int j = n; j>i; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;        
    }
}


/* 
PATTERN 6
1 2 3 4
1 2 3
1 2
1
*/
void print6(int n)
{
    for (int i = n; i>0; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << j << " ";
        }
        cout << endl;        
    }
}


/* 
PATTERN 7
    *
   * *
  * * *
 * * * *
*/
void print7(int n)
{

}


int main()
{
    int n;
    cin >> n;
    print1(n);
    cout<<endl;
    print2(n);
    cout<<endl;
    print3(n);
    cout<<endl;
    print4(n);
    cout<<endl;
    print5(n);
    cout<<endl;
    print6(n);
    cout<<endl;
    return 0;
}
