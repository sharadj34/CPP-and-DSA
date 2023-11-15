/*
QUESTION: Sum of two arrays

LINK: https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186
*/

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) 
{
    string k , l;
    for(int i = 0; i < n;i++)
    {
        k += to_string(a[i]);
    }

    for(int i = 0;i < m;i++)
    {
        l += to_string(b[i]);
    }

    int num = stoi(k) + stoi(l);
    string res = to_string(num);

    vector<int>v;
    for(int j = 0;j < res.size();j++)
    {
        int ans = res[j] - '0';
        v.push_back(ans);
    } 
    return v; 
}