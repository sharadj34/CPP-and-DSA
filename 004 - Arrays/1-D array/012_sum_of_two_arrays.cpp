/*
QUESTION: Sum of two arrays

LINK: https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186
*/

#include <bits/stdc++.h>
vector<int> findArraySum(vector<int>a, int n, vector<int>b, int m) {
    
	vector<int>ans;
	int carry = 0;
	int sum = 0;
	int i = n - 1;
    int j = m - 1;
    
	while (i >= 0 || j >= 0) {
		sum = 0;
        // If we have some elements left in the first array, then add it to the sum.
		if (i >= 0) {
			sum += a[i];
			i--;
		}
        
        // If we have some elements left in the second array, then add it to the sum.
		if (j >= 0) {
			sum += b[j];
			j--;
		}
        
		sum += carry;
		int lastDigit = sum % 10;
		carry = sum / 10;
		ans.push_back(lastDigit);
	}
    
    // If still some carry is left, then push it to the answer.
	if (carry) {
		ans.push_back(carry);
	}
    
	reverse(ans.begin(), ans.end());
	return ans;
}