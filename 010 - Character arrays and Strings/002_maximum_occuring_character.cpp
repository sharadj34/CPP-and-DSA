#include <bits/stdc++.h>
using namespace std;

char getMaxOccChar(string s)
{
    int arr[26] = {0};
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i=0 ; i<26 ; i++)
    {
        if(maxi<arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    return ans + 'a';

}

int main()
{
    string s;
    cin >> s;

    cout << getMaxOccChar(s) << endl;

    return 0;
}