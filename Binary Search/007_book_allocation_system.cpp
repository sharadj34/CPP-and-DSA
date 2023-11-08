#include <bits/stdc++.h>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pagesum = 0;

    for(int i=0; i<n; i++)
    {
        if(pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }

        else
        {
            studentCount++;
            if(studentCount > m || arr[i]>mid)
            {
            return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[5] = {2,8,8,4,5};
    int n = 5;
    int m = 6;

    int s = 0;
    int sum = 0;

    for(int i=0; i<n ; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    cout << ans;
}


/*
bool check(int mid, vector <int> &arr, int n, int m){
    int sum = 0;
    for (int i=0; i<n; i++) {        
        if (sum+arr[i] > mid) {
            sum = arr[i];
            m--;
        } 
        else {
            sum += arr[i];
        }
        if (m<=0) return false;
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
if (m > n) {
        return -1;
    } 
    int maxim = -1;
    int lo=1, high = 0;
    for (int i=0; i<n; i++) {
        high += arr[i];
        maxim = max(maxim, arr[i]);
    }
    if (m==n) {
        return maxim;
    }
    int ans=-1;
    int hi = high;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(check(mid, arr, n, m)){
            ans=mid;
            hi=mid-1;  
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
*/