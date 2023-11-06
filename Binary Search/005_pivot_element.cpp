#include <bits/stdc++.h>
using namespace std;

int getpivot(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + ((end -start)/2);

    while(start < end)
    {
        if(arr[mid] >= arr[0])
        start = mid + 1;

        else
        end = mid;

        mid = start + ((end -start)/2);
    }
    return start;
}

int main()
{
    int arr[5] = {8 , 10 , 17 , 1 , 3};
    cout << "Pivot index is : " << getpivot(arr , 5);
}



/* LEETCODE

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftsum = 0;
        for (int ele : nums)
            totalSum += ele;
        for (int i = 0; i < nums.size(); leftsum += nums[i++])
            if (leftsum * 2 == totalSum - nums[i])
                return i;       
        return -1;    
    }
};
*/