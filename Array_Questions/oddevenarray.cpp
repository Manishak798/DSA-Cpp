/** Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
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
    int odd = 0, even = 0;
    int oddarr[odd];
    int evenarr[even];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            evenarr[even] = arr[i];
            even++;
        }
        else
        {
            oddarr[odd] = arr[i];
            odd++;
        }
    }
    cout << "EVEN ARRAY: ";
    for (int i = 0; i < even; i++)
    {
        cout << evenarr[i] << " ";
    }
    cout << endl
         << "ODD ARRAY: ";
    for (int i = 0; i < odd; i++)
    {
        cout << oddarr[i] << " ";
    }
    return 0;
}
/****
 enter size of array: 5

Enter element 0 :1

Enter element 1 :2

Enter element 2 :3

Enter element 3 :4

Enter element 4 :5

EVEN ARRAY: 2 4
ODD ARRAY: 1  3  5
*/