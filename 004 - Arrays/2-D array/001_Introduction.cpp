#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int column)
{
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            if(target == arr[i][j])
            return 1;
        }
    }
    return 0;
}

int main()
{
    // creating array
    int arr[3][4];
    int arr1[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // taking input
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    // printing array
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to search:" << endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4))
    cout << "Element found" << endl;
    else
    cout << "Element not found" << endl;
    return 0;
}