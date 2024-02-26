/*Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
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
    for (auto it : arr)
    {
        sum += it;
    }
    cout << "Sum of all elements: " << sum;

    return 0;
}
/*output
enter size of array: 3

Enter element 0 :1

Enter element 1 :1

Enter element 2 :2

Sum of all elements: 4
*/