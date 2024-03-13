/**
 * @file pairsum.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-03-13
 * Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
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
    cout << endl;
    cout << "Enter pair sum: ";
    cin >> sum;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        p.first = i;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                p.second = j;
            }
        }
    }
    cout << "Pair of elements can make the given sum by the value of index " << p.first << " and " << p.second;
}
/**
 * @brief
 * Enter size of array: 6

Enter pair sum: 15

6
8
4
-5
7
9
Pair of elements can make the given sum by the value of index5 and 0
 *
 */