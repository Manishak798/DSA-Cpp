/**
 * @file leftDaignol.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-12
 *
 * @copyright Copyright (c) 2024
 * Write a program in C to find the sum of the left diagonals of a matrix.
Test Data :
Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :
1 2
3 4
Addition of the left Diagonal elements is :5
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Matrix: ";
    cin >> n;
    int arr[n][n];
    int sum = 0;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << "Addition of the left Diagonal elements is : " << sum;
}
/**
 * @brief
 * Enter size of Matrix: 3
Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 2
Enter element of array at 0 2 : 3

Enter element of array at 1 0 : 4
Enter element of array at 1 1 : 5
Enter element of array at 1 2 : 6

Enter element of array at 2 0 : 7
Enter element of array at 2 1 : 8
Enter element of array at 2 2 : 9


Addition of the left Diagonal elements is : 15
 *
 */