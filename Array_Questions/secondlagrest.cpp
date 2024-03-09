/**
 * @file secondlagrest.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-08
 *
 * @copyright Copyright (c) 2024
 * Write a program in C to find the second largest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6
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
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            arr[i] = 0;
        }
    }
    int secondLagrest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLagrest)
        {
            secondLagrest = arr[i];
            arr[i] = 0;
        }
    }
    cout << endl
         << "Second Lagrest Element of array is " << secondLagrest;
    return 0;
}
/**
 * @brief
 * enter size of array: 5

Enter element 0 :2

Enter element 1 :9

Enter element 2 :1

Enter element 3 :4

Enter element 4 :6


Second Lagrest Element of array is 6
 *
 */