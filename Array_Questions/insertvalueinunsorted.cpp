/**
 * @file insertvalueinunsorted.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-07
 *
 * @copyright Copyright (c) 2024
 * Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    int newarr[6];
    cout << endl;
    int valueToInsert;
    cout << "Input the value to be inserted :";
    cin >> valueToInsert;
    cout << endl;
    int position;
    cout << "Input the position where you need the value to be inserted :";
    cin >> position;
    cout << endl;
    cout << "Input elements in the array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
        cin >> arr[i];
        newarr[i] = arr[i];
        cout << endl;
    }
    cout << "Current list of array [ ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "]" << endl;
    // int temp = 0;
    // for (int i = 0; i < n + 1; i++)
    // {
    //     if (i == position)
    //     {
    //         temp = newarr[i];
    //         // newarr[i] = valueToInsert;
    //         for (int j = i + 1; j < n + 1; j++)
    //         {
    //             newarr[j] = newarr[j - 1];
    //         }
    //         newarr[i] = valueToInsert;
    //         break;
    //     }
    // }
    for (int i = 0, j = 0; i < n + 1; i++, j++)
    {
        if (i == position)
        {
            newarr[i] = valueToInsert;
            j--; // Stay at the same position for the next iteration
        }
        else
        {
            newarr[i] = arr[j];
        }
    }
    cout << "After Insert the element the new list is : [ ";
    for (auto it : newarr)
    {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}