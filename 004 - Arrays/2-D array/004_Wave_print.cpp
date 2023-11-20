/*
PROBLEM: Print like a wave

LINK: https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?leftPanelTabValue=SUBMISSION
*/

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0 ; col<mCols ; col++)
    {
        if(col&1)
        {
            // odd index - bottom to top
            for(int row = nRows-1; row >= 0; row--)
            ans.push_back(arr[row][col]);
        }
        
        else
        {
            // 0 or even index - top to bottom
            for(int row = 0; row <= nRows - 1; row++)
            ans.push_back(arr[row][col]);
        }
    }
    return ans;
}


// Time Complexity = O(n*m), n = number of rows & m = number of columns