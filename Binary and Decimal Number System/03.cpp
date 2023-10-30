// BINARY TO DECIMAL CONVERSION

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int i=0, dec=0;
    while(n!=0)
    {
        int bit = n%10;
        if(bit == 1)
        dec = dec + pow(2,i);
        n = n/10;
        i++;
    }
    cout << "Decimal is " << dec; 
}