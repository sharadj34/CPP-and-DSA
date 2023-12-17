/*
PROBLEM: Permutations of a String

LINK: https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254
*/

#include <bits/stdc++.h>
void solve(string str,int index,vector<string>&ans){

    if(index>= str.length()){
        ans.push_back(str);
        return;
    }

    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        solve(str,index+1,ans);
        //backtrack
        swap(str[index],str[j]);
    }
}
vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string>ans;
    int index=0;
    solve(str,index,ans);
    sort(ans.begin(),ans.end());
    return ans;
}