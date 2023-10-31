#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
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
OUTPUT
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