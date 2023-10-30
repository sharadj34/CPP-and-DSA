// NEGATIVE DECIMAL TO BINARY CONVERSION

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)
    n = abs(n);
    int ans=0,ans1=0, i=0;
    while(n!=0)
    {
        int bit = n&1;

        ans = (bit * pow(10,i)) + ans;

        n = n>>1;
        i++; 
    }
    string str = to_string(ans);
    int m = str.length();
 
    /* Traverse the string to get first '1' from the last of string */
    int j;
    for (j = m-1 ; j >= 0 ; j--)
        if (str[j] == '1')
            break;
 
    /* If there exists no '1' concatenate 1 at the starting of string */
    if (j == -1)
        cout << '1' + str;
 
    // Continue traversal after the position of first '1' */
    for (int k = j-1 ; k >= 0; k--)
    {
        //Just flip the values
        if (str[k] == '1')
            str[k] = '0';
        else
            str[k] = '1';
    }
 
    cout << "Binary is " << str;
    return 0;
}