/**
 * @file insertinsortedlist.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-07
 *
 * @copyright Copyright (c) 2024
 *  Write a program in C to insert the values in the array (sorted list).
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 5
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 5 7 9 11
After Insert the list is :
2 5 7 8 9 11
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    int newarr[n + 1];
    cout << endl;
    int valueToInsert;
    cout << "Input the value to be inserted :";
    cin >> valueToInsert;
    cout << endl;
    cout << "Input elements in the array in ascending order:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
        newarr[i] = arr[i];
        cout << endl;
    }
    cout << "[ ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "]";
    int temp = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (valueToInsert <= newarr[i])
        {
            temp = newarr[i];
            newarr[i] = valueToInsert;
            for (int j = n + 1; j > i + 1; j--)
            {
                newarr[j] = newarr[j - 1];
            }
            newarr[i + 1] = temp;
            break;
        }
    }
    cout << "[ ";
    for (auto it : newarr)
    {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}
/**
 * @brief
 * enter size of array: 5

Input the value to be inserted :5

Input elements in the array in ascending order:
Enter element 0 :2

Enter element 1 :3

Enter element 2 :6

Enter element 3 :8

Enter element 4 :9

[ 2 3 6 8 9 ][ 2 3 5 6 8 9 ]
 *
 */
/**
 *
 * enter size of array: 5

Input the value to be inserted :2

Input elements in the array in ascending order:
Enter element 0 :1

Enter element 1 :2

Enter element 2 :3

Enter element 3 :4

Enter element 4 :5

[ 1 2 3 4 5 ][ 1 2 2 3 4 5 ]**/