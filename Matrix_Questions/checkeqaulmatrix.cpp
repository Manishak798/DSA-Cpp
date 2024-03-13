/**
 * @file checkeqaulmatrix.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-13
 * Write a program in C to accept two matrices and check whether they are equal.
Test Data :
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The first matrix is :
1 2
3 4
The second matrix is :
1 2
3 4
The Matrices can be compared :
Two matrices are equal.
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
    int matrix1[n][n];
    int matrix2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of array at " << i << " " << j << " : ";
            cin >> matrix1[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of array at " << i << " " << j << " : ";
            cin >> matrix2[i][j];
        }
        cout << endl;
    }
    bool equalmatrix = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix1[i][j] == matrix2[i][j])
            {
                equalmatrix = true;
            }
        }
    }
    if (equalmatrix == 1)
    {
        cout << "Matrices are equal.";
    }
    else
    {
        cout << "Matrices are not equal.";
    }
}
/**
 * @brief
 * Enter size of Matrix: 2
Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 2

Enter element of array at 1 0 : 3
Enter element of array at 1 1 : 4

Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 2

Enter element of array at 1 0 : 3
Enter element of array at 1 1 : 4

Matrices are equal.
 *
 */