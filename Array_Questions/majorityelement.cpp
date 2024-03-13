/**
 * @file majorityelement.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-13
 * Write a program in C to find the majority element of an array.
A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array.
 * @copyright Copyright (c) 2024
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter size of array: ";
    cin >> n;
    sum = n / 2;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element of array at position " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        int majorityCount = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                majorityCount++;
            }
        }
        if (majorityCount > sum)
        {
            cout << "Majority Element is: " << arr[i];
            break;
        }
    }
    cout << "There is no Majority Element.";
}
/**
 * @brief
 * Enter size of array: 8

Enter element of array at position 0 : 4

Enter element of array at position 1 : 8

Enter element of array at position 2 : 4

Enter element of array at position 3 : 6

Enter element of array at position 4 : 7

Enter element of array at position 5 : 4

Enter element of array at position 6 : 4

Enter element of array at position 7 : 8

There is no Majority Element.
 *
 */