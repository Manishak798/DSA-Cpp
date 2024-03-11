/**
 * @file matrixmultiplication.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *  Write a program in C for the multiplication of two square matrices.
Test Data :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The multiplication of two matrix is :

19 22
43 50
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
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of matrix 1 at " << i << " " << j << " : ";
            cin >> matrix1[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element of matrix 2 at " << i << " " << j << " : ";
            cin >> matrix2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
        cout << endl;
    }
    cout << "Multiplication of Matrix : [ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";
}
/**
 * @brief
 * Enter size of Matrix: 2
Enter element of matrix 1 at 0 0 : 1
Enter element of matrix 1 at 0 1 : 2

Enter element of matrix 1 at 1 0 : 3
Enter element of matrix 1 at 1 1 : 4


Enter element of matrix 2 at 0 0 : 5
Enter element of matrix 2 at 0 1 : 6

Enter element of matrix 2 at 1 0 : 7
Enter element of matrix 2 at 1 1 : 8




Multiplication of Matrix : [
19 22
43 50
]
 *
 */