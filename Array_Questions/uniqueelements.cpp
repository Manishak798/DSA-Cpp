/**Write a program in C to print all unique elements in an array.
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5**/

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
    cout << "Unique elements are: ";
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}