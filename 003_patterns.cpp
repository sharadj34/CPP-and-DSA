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
    for (int i = 0; i<n; i++)
    {
        //sapce
        for(int j=0 ; j<n-i-1 ; j++)
        cout << " ";
        //star
        for(int j=0 ; j<2*i+1 ; j++)
        cout << "*";
        //space
        for(int j=0 ; j<n-i-1 ; j++)
        cout << " ";
        cout<<endl;
    }

}


/* 
PATTERN 8
***********
 *********
  *******
   *****
    ***
     *
*/
void print8(int n)
{
    for (int i = 0; i<n; i++)
    {
        //sapce
        for(int j=0 ; j<i ; j++)
        cout << " ";
        //star
        for(int j=0 ; j<(2*n)-(2*i+1) ; j++)
        cout << "*";
        //space
        for(int j=0 ; j<i ; j++)
        cout << " ";
        cout<<endl;
    }
}


/* 
PATTERN 9
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *     
*/
void print9(int n)
{
    // Combine pattern 7 and 8
}


/* 
PATTERN 10
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
void print10(int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;        
    }
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
PATTERN 11
*/
void print11(int n)
{

}


int main()
{
    int n;
    cin >> n;
    // Pattern 1
    print1(n);
    cout<<endl;
    // Pattern 2
    print2(n);
    cout<<endl;
    // Pattern 3
    print3(n);
    cout<<endl;
    // Pattern 4
    print4(n);
    cout<<endl;
    // Pattern 5
    print5(n);
    cout<<endl;
    // Pattern 6
    print6(n);
    cout<<endl; 
    // Pattern 7
    print7(n);
    cout<<endl;
    // Pattern 8
    print8(n);
    cout<<endl;
    // Pattern 9
    print7(n);
    print8(n);
    // Pattern 10
    print10(n);
    cout<<endl;
    // Pattern 11
    print11(n);
    cout<<endl;
    return 0;
}
