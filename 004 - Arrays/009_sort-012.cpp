#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter size of array:" << endl;
    int n;
    cin >> n;
    cout << "enter elements in array:" << endl;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    cin >> arr[i];
    
    int lo = 0, mid = 0, hi = n-1;
   while(hi >= mid)
   {
       if(arr[mid] == 0)
       {
           swap(arr[lo] , arr[mid]);
           lo++;
           mid++;
       }

       else if(arr[mid] == 1)
       {
           mid++;
       }

       else if(arr[mid] == 2)
       {
           swap(arr[mid] , arr[hi]);
           hi--;
       }
   }
    cout << "Print sorted array:" << endl;
    for(int i=0 ; i<n ; i++)
    cout << arr[i] << " ";
}