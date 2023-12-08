/*
PROBLEM: Bitonic Point

LINK: https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&category=Arrays&difficulty=Easy&sprint=ca8ae412173dbd8346c26a0295d098fd&sortBy=submissions
*/

#include <bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k)
{
    vector<int> v;
    for(int j=0; j<(n-k); j++)
    {
        int ans=INT_MIN;
        for(int i=j; i<(j+2); i++)
        {
            ans=max(ans, arr[i]); 
        }
        v.push_back(ans);   
    }
    return v;
}

int main()
{
    int n=9;
    int k=3;
    int arr[n] = {1,2,3,1,4,5,2,3,6};

    vector<int> v1 = max_of_subarrays(arr, n, k);

    for(int p:v1)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}