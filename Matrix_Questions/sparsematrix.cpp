/**
 * @file sparsematrix.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-13
 * Write a program in C to accept a matrix and determine whether it is a sparse matrix.
Test Data :
Input the number of rows of the matrix : 2
Input the number of columns of the matrix : 2
Input elements in the first matrix :
element - [0],[0] : 0
element - [0],[1] : 0
element - [1],[0] : 1
element - [1],[1] : 0
Expected Output :
The given matrix is sparse matrix.
There are 3 number of zeros in the matrix
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
    cout << endl;
    int zeroCount = 0;
    int numCount = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                zeroCount++;
            }
            else
            {
                numCount++;
            }
        }
    }
    if (zeroCount > numCount)
    {
        cout << "Matrix is a sparse matrix." << endl;
        cout << "Count of Zero's are: " << zeroCount;
    }
    else
    {
        cout << "Matrix is not a sparse matrix.";
    }
}
/**
 * @brief
 * Enter size of Matrix: 2
Enter element of array at 0 0 : 0
Enter element of array at 0 1 : 0

Enter element of array at 1 0 : 1
Enter element of array at 1 1 : 0


Matrix is a sparse matrix.
Count of Zero's are: 3
 *
 */