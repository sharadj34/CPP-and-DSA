#include <bits/stdc++.h>
using namespace std;

int getMax(int num[], int n)
{
    int ma = INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        ma = max(ma,num[i]);
        /* 
        if(num[i]>ma)
        ma = num[i]; 
        */
    }
    return ma;
}

int getMin(int num[], int n)
{
    int mi = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        mi = min(mi,num[i]);
        /* 
        if(num[i]<mi)
        mi = num[i]; 
        */
    }
    return mi;
}

int main()
{
    int size;
    cin >> size;
    int num[size];

    for(int i = 0 ; i < size ; i++)
    {
        cin >> num[i];
    }
    
    cout << "Maximum value is " << getMax(num,size) << endl;
    cout << "Minimum value is " << getMin(num,size) << endl;
}