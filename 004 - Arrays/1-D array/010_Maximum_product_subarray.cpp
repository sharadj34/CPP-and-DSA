/*
QUESION: Maximum Product Subarray

LINK: https://leetcode.com/problems/maximum-product-subarray/
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n=nums.size();
        int i,res=INT_MIN,prod=1;
        for(i=0;i<n;i++){
            prod=prod*nums[i];
            res=max(prod,res);
            if(nums[i]==0){
                prod=1;
            }
        }
        prod=1;
        for(i=n-1;i>=0;i--){
            prod=prod*nums[i];
            res=max(prod,res);
            if(nums[i]==0){
                prod=1;
            }
        }
        return res;
    }
};