/*Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2*/
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
    cout << "Values stored in an array [ ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "]";
    cout << endl;
    cout << "Reverse array [ ";
    for (int j = (n - 1); j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << "]";
    return 0;
}
/*output
enter size of array: 4

Enter element 0 :1

Enter element 1 :2

Enter element 2 :3

Enter element 3 :4

Values stored in an array [ 1 2 3 4 ]
Reverse array [ 4 3 2 1 ]*/