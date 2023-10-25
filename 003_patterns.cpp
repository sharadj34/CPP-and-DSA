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
1
01
101
0101
10101
*/
void print11(int n)
{
    int start = 1;
    for (int i=0; i<n; i++)
    {
        if (i%2==0) 
        start = 1;
        else 
        start = 0;
        for(int j=0 ; j<=i ; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}


/*
PATTERN 12
1        1
12      21
123    321
1234  4321
1234554321
*/
void print12(int n)
{
    int space=2*(n-1);
    for (int i=1; i<=n; i++)
    {
        //number
        for(int j=1 ; j<=i ; j++)
        cout << j;
        //space
        for(int j=1; j<=space; j++)
        cout << " ";
        //number
        for(int j=i ; j>=1 ; j--)
        cout << j;

        cout << endl;
        space-=2;
    }
}


/*
PATTERN 13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void print13(int n)
{
    int count = 1;
    for (int i=1; i<=n; i++)
    {
        for(int j = 1; j<=i;j++)
        {
            cout << count << " ";
            count+=1;
        }
        cout<<endl;
    }
}


/*
PATTERN 14
A
A B
A B C
A B C D
A B C D E
*/
void print14(int n)
{
    for (int i=0; i<n; i++)
    {
        for(char ch='A' ; ch<='A'+i; ch++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
}


/*
PATTERN 15
A B C D E
A B C D
A B C
A B
A
*/
void print15(int n)
{
    for (int i=n; i>0; i--)
    {
        for(char ch='A' ; ch <= 'A'+i-1; ch++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
}


/*
PATTERN 16
A
B B
C C C
D D D D
E E E E E
*/
void print16(int n)
{
    for (int i=0; i<n; i++)
    {
        char ch = 'A' + i;
        for(int j=0;j<=i;j++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
}


/*
PATTERN 17
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
void print17(int n)
{
    for (int i=0; i<n; i++)
    {
        //spaces
        for(int j=0; j<n-i-1; j++)
        {
        cout<<" ";
        }

        //alphabets
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1 ; j <= 2*i+1 ; j++)
        {
        cout<<ch;
        if(j <= breakpoint)
        ch++;
        else
        ch--;
        }

        //spaces
        for(int j=0; j<n-i-1; j++)
        {
        cout<<" ";
        }

        cout << endl;
    }
}


/*
PATTERN 18
E 
E D 
E D C 
E D C B 
E D C B A 
*/
void print18(int n)
{
    char start;
    for (int i=1; i<=n; i++)
    {
        start = 'A' + (n-1);
        for(int j=0; j<i; j++)
        {
            cout << start << " ";
            start--;
        }
        cout<<endl;
    }
}


/*
PATTERN 19
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
void print19(int n)
{
    n = 2*n ;
    // For loop 'row' in range 0 to N-1.
    for(int row = 0; row < n; row++) {
        // For loop 'col' in range 0 to N-1.
        for(int col = 0; col < n; col++) {
            // Condition for first half of the rows.
            if(row < n/2 && (col < (n/2 - row) || col >= (n/2 + row))) {
                cout << '*' ;
            }
            // Condition for the second half of the rows.
            else if(row >= n/2 && (col <= (row-n/2) || col >= (n-row+n/2-1))) {
                cout << '*' ;
            }
            else {
                cout << ' ';
            }
            cout << ' ';
        }
        // End the current row of the pattern.
        cout << '\n';
    }
}


/*
PATTERN 20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void print20(int n)
{
    int spaces = 2*n-2;
    for (int i=1; i<=2*n-1;i++)
    {
        int stars = i;
        if(i>n)
        stars = 2*n-i;

        for(int j=1;j<=stars;j++)
        cout<< "*";

        for(int j=1; j<=spaces; j++)
        cout<<" ";

        for(int j=1;j<=stars;j++)
        cout<< "*";
    
    cout<<endl;
    if(i<n)
    spaces-=2;
    else
    spaces+=2;
    }
}


/*
PATTERN 21
*****
*   *
*   *
*   *
*****
*/
void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            cout<<"*";
            else
            cout<<" "; 
        }
        cout<<endl;
    }
    
}


/*
PATTERN 22
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
void print22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int down = (2*n-2) - i;
            cout << (n - min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
}


/*
PATTERN 23
E
D E
C D E
B C D E
A B C D E
*/
void print23(int n)
{
    for(int i=0; i<n; i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }

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
    // Pattern 12
    print12(n);
    cout<<endl;
    // Pattern 13
    print13(n);
    cout<<endl;
    // Pattern 14
    print14(n);
    cout<<endl;
    // Pattern 15
    print15(n);
    cout<<endl;
    // Pattern 16
    print16(n);
    cout<<endl; 
    // Pattern 17
    print17(n);
    cout<<endl;
    // Pattern 18
    print18(n);
    cout<<endl;
    // Pattern 19
    print19(n);
    cout<<endl;
    // Pattern 20
    print20(n);
    cout<<endl; 
    // Pattern 21
    print21(n);
    cout<<endl;
    // Pattern 22
    print22(n);
    cout<<endl;
    // Pattern 23
    print23(n);
}
