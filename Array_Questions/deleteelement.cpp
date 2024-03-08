/**
 * @file deleteelement.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-08
 *
 * @copyright Copyright (c) 2024
 * Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    int newarr[n];
    cout << endl;
    int position;
    cout << "Input the position where you want to delete:";
    cin >> position;
    cout << endl;
    cout << "Input elements in the ascending order in array:" << endl;

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
    for (int i = 0; i < n; i++)
    {
        if (i >= position)
        {

            newarr[i] = newarr[i + 1];
        }
    }
    cout << "After Insert the element the new list is : [ ";
    for (int it = 0; it < n - 1; it++)
    {
        cout << newarr[it] << " ";
    }
    cout << "]";
    return 0;
}
/**
 * @brief
 * enter size of array: 5

Input the position where you want to delete:1

Input elements in the ascending order in array:
Enter element 0 :1

Enter element 1 :2

Enter element 2 :3

Enter element 3 :4

Enter element 4 :5

Current list of array [ 1 2 3 4 5 ]
After Insert the element the new list is : [ 1 3 4 5 ]
 *
 */