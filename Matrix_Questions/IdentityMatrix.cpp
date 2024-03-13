/**
 * @file IdentityMatrix.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-13
 * Write a program in C to check whether a given matrix is an identity matrix.
Test Data :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 1
element - [1],[2] : 0
element - [2],[0] : 0
element - [2],[1] : 0
element - [2],[2] : 1
Expected Output :
The matrix is :
1 0 0
0 1 0
0 0 1
The matrix is an identity matrix.
 * @copyright Copyright (c) 2024
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Matrix: ";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of array at " << i << " " << j << " : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    bool principalDaignol = false;
    bool zerocount = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && arr[i][j] == 1)
            {
                principalDaignol = true;
            }
            else if (i != j && arr[i][j] == 0)
            {
                zerocount = true;
            }
        }
    }
    if (principalDaignol == 1 && zerocount == 1)
    {
        cout << "Given matrix is a identity matrix";
    }
}
/**
Enter size of Matrix: 3
Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 0
Enter element of array at 0 2 : 0

Enter element of array at 1 0 : 0
Enter element of array at 1 1 : 1
Enter element of array at 1 2 : 0

Enter element of array at 2 0 : 0
Enter element of array at 2 1 : 0
Enter element of array at 2 2 : 1

Given matrix is a identity matrix
**/