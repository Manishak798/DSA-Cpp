/**Write a program in C to merge two arrays of the same size sorted in descending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter size of array1: ";
    cin >> n1;
    cout << endl;
    cout << "enter size of array2: ";
    cin >> n2;
    int arr1[n1];
    int arr2[n2];
    int n = n1 + n2;
    cout << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << "Enter element in array 1 " << i << " :";
        cin >> arr1[i];
        cout << endl;
    }
    for (int i = 0; i < n2; i++)
    {
        cout << "Enter element in array 2 " << i << " :";
        cin >> arr2[i];
        cout << endl;
    }
    int arr[n];
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr[n1 + i] = arr2[i];
    }
    int temp = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
