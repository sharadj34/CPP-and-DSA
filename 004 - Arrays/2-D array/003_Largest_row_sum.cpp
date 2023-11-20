#include<bits/stdc++.h>
using namespace std;

void largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0;i<row;i++)
    {
        int sum = 0;
        for(int j=0;j<col;j++)
        {
            sum = sum + arr[i][j];
        }
        if(sum>maxi)
        {
        maxi = sum;
        rowIndex = i;
        }
    }

    cout << "THE MAXIMUM SUM IS: " << maxi << endl;
    cout << "THE INDEX OF THE ROW IS: " << rowIndex << endl;
}

int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }

    largestRowSum(arr,3,3);
    return 0;
}