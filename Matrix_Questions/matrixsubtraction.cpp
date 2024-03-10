/**
 * @file matrixsubtraction.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 * Write a program in C for the subtraction of two matrices.
Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The First matrix is :

5 6
7 8
The Second matrix is :

1 2
3 4
The Subtraction of two matrix is :

4 4
4 4
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
    cout << "Addition of Matrix : [ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] - matrix2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << "]";
}
/*
Enter size of Matrix: 2
Enter element of matrix 1 at 0 0 : 5
Enter element of matrix 1 at 0 1 : 6

Enter element of matrix 1 at 1 0 : 7
Enter element of matrix 1 at 1 1 : 8


Enter element of matrix 2 at 0 0 : 1
Enter element of matrix 2 at 0 1 : 2

Enter element of matrix 2 at 1 0 : 3
Enter element of matrix 2 at 1 1 : 4


Addition of Matrix : [
4  4
4  4
]
***/