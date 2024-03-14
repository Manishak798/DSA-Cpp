/**
 * @file oddoccurence.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-14
 * Write a program in C to find the number occurring odd number of times in an array.
All numbers occur even number of times except one number which occurs odd number of times.
Expected Output :
The given array is : 8 3 8 5 4 3 4 3 5
The element odd number of times is : 3
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
        cout << "Enter element " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << "The element occured odd number of times is : " << arr[i];
            break;
        }
    }
    return 0;
}
/**
 * @brief
 * enter size of array: 9

Enter element 0 : 8

Enter element 1 : 3

Enter element 2 : 8

Enter element 3 : 5

Enter element 4 : 4

Enter element 5 : 3

Enter element 6 : 4

Enter element 7 : 3

Enter element 8 : 5

The element occured odd number of times is : 3
 *
 */