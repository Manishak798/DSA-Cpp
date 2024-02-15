/*Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    int cpyarr[n];
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
    for (int j = 0; j < n; j++)
    {
        cpyarr[j] = arr[j];
    }
    cout << "Copied Array: [ ";
    for (auto cpyit : cpyarr)
    {
        cout << cpyit << " ";
    }
    cout << "]";
    cout << endl;
    return 0;
}
/*output
enter size of array: 4

Enter element 0 :1

Enter element 1 :2

Enter element 2 :3

Enter element 3 :4

Values stored in an array [ 1 2 3 4 ]
Copied Array: [ 1 2 3 4 ]
*/