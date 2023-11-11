/*
PROBLEM: Insertion Sort

LINK: https://www.codingninjas.com/studio/problems/insertion-sort_3155179
*/

#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    // WHILE LOOP 
        for(int i=1;i<n;i++)
        {
            int current=arr[i];
            int j=i-1;
            while(arr[j]>current && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
    

    // FOR LOOP
    int j;
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        for(j = i-1 ; j>=0 ; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}