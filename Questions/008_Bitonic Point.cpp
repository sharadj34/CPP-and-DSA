/*
PROBLEM: Bitonic Point

LINK: https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&category=Arrays&difficulty=Easy&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
*/

#include <bits/stdc++.h>
using namespace std;

int findMaximum(int arr[], int n) 
{
    int ans=INT_MIN;
    for(int i=0; i<n; i++)
    {
        ans=max(ans, arr[i]); 
    }
    return ans;   
}

int main()
{
    int n=9;
    int arr[n] = {1,15,25,45,42,21,17,12,11};

    int ans = findMaximum(arr, n);

    cout << ans << endl;

    return 0;
}