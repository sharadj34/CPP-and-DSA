/*
PROBLEM : Find First and Last Position of Element in Sorted Array

LINK: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/
#include <bits/stdc++.h>
using namespace std;

int FirstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid])
        {
            start = mid +1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start)/2);
    }

    return ans;
}

int LastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + ((end - start)/2);
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid])
        {
            start = mid +1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start)/2);
    }

    return ans;
}


int main()
{
    int num[8] = {1,2,3,3,3,3,3,5};

    int FO = FirstOccurence(num , 8 , 3);

    int LO = LastOccurence(num , 8 ,3);

    cout << "First index of 3 is : " << FO << endl;
    cout << "Last index of 3 is : " << LO << endl ;
}



/*
OUTPUT:
First index of 3 is : 2
Last index of 3 is : 6
*/