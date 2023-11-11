/*
PROBLEM: Bubble Sort

LINK: https://www.codingninjas.com/studio/problems/bubble-sort_980524
*/

#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{
  bool swapped;
  for(int i=1; i<n; i++) // for rounds 1 to n-1
  {
    swapped = false;
    for(int j = 0 ; j<n-i ; j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap(arr[j] , arr[j+1]);
        swapped = true;
      }
    }
    if(swapped == false)
    break;
  }
}
