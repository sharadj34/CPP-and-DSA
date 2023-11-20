#include<bits/stdc++.h>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{
    for(int i=0;i<row;i++)
    {
        int sum = 0;
        for(int j=0;j<col;j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColSum(int arr[][3], int row, int col)
{
    for(int j=0;j<col;j++)
    {
        int sum = 0;
        for(int i=0;i<row;i++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
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

    printRowSum(arr,3,3);
    printColSum(arr,3,3);
    return 0;
}