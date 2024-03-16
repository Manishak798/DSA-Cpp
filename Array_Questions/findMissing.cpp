/**
 * @file findMissing.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-14
 * Write a program in C to find the missing number in a given array. There are no duplicates in the list.
Expected Output :
The given array is : 1 3 4 2 5 6 9 8
The missing number is : 7
 * @copyright Copyright (c) 2024
 *
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
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        if (count != arr[i])
        {
            cout << "Missing number " << count;
            break;
        }
        count++;
    }
    return 0;
}
/**
 * @brief
 * enter size of array: 8

Enter element 0 :1

Enter element 1 :3

Enter element 2 :4

Enter element 3 :2

Enter element 4 :5

Enter element 5 :6

Enter element 6 :9

Enter element 7 :8

Missing number 7
 *
 */