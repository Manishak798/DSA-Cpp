/**
 * @file sortdescending.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-06
 *
 * @copyright Copyright (c) 2024
 *
 *  Write a program in C to sort the elements of the array in descending order.
Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
        cout << endl;
    }
    int temp = 0;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    cout << "[ ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}

/**
 * @brief output
 * enter size of array: 5

Enter element 0 :8

Enter element 1 :9

Enter element 2 :2

Enter element 3 :1

Enter element 4 :3

[ 9 8 3 2 1 ]
 *
 */