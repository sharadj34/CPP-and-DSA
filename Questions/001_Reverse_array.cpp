/*
QUESTION: Reverse the array after position m

LINK: https://www.codingninjas.com/studio/problems/reverse-the-array_1262298
*/

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// APPROACH 1
	reverse(arr.begin()+m+1,arr.end());

	// APPROACH 2
	int s = m+1;
	int e = arr.size()-1;
	while(s<=e)
	{
		swap(arr[s] , arr[e]);
		s++;
		e--;
	}
}