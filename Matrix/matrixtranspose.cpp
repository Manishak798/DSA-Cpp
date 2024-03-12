/**
 *
 @file matrixtranspose.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-12
 *
 * @copyright Copyright (c) 2024
 * Write a program in C to find the transpose of a given matrix.
Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Matrix: ";
    cin >> n;
    int arr[n][n];
    int transposeMatrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of array at " << i << " " << j << " : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transposeMatrix[j][i] = arr[i][j];
        }
    }

    cout << endl;
    cout << "Matrix Transpose : [ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transposeMatrix[i][j];
        }
        cout << endl;
    }
    cout << "]";
}
/**
Enter size of Matrix: 2
Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 2

Enter element of array at 1 0 : 3
Enter element of array at 1 1 : 4


Matrix Transpose : [
13
24
]
**/