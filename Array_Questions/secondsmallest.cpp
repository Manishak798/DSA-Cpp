/***
 *
 *  Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4**/
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
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            arr[i] = 99999;
        }
    }
    int secondSmallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << endl
         << "Second Smallest Element of array is " << secondSmallest;
    return 0;
}