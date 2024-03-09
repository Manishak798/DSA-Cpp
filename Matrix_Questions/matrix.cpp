/**
 * @file matrix.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 * Write a program in C for a 2D array of size 3x3 and print the matrix.
Test Data :
Input elements in the matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [0],[2] : 3
element - [1],[0] : 4
element - [1],[1] : 5
element - [1],[2] : 6
element - [2],[0] : 7
element - [2],[1] : 8
element - [2],[2] : 9
Expected Output :
The matrix is :

1 2 3
4 5 6
7 8 9
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
    cout << "Matrix : [ " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "]";
}
/**
 * @brief Enter size of Matrix: 3
Enter element of array at 0 0 : 1
Enter element of array at 0 1 : 2
Enter element of array at 0 2 : 3

Enter element of array at 1 0 : 4
Enter element of array at 1 1 : 5
Enter element of array at 1 2 : 6

Enter element of array at 2 0 : 7
Enter element of array at 2 1 : 8
Enter element of array at 2 2 : 9


Matrix : [123
456
789
 ]
 *
 */