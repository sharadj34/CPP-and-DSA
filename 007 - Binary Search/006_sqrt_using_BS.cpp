/*
PROBLEM: Sqrt(x)

LINK: https://leetcode.com/problems/sqrtx/
*/

#include <bits/stdc++.h>
using namespace std;

long long int integersol(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;

    while(s<=e)
    {
        long long int square = mid * mid;

        if(square == n)
        return mid;
        if(square < n)
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for(int i=0; i<precision; i++)
    {
        factor = factor/10;

        for(double j=ans ; j*j<n ; j = j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

    int main() 
    {
        int n;
        cout << "Enter a number: " << endl;
        cin >> n;

        int tempsol = integersol(n);

        cout << "Answer is : " << morePrecision(n , 3, tempsol) << endl;

        return 0;
    }