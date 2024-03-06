/**Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    int frq[n] = {-1};
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << " :";
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
                frq[j] = 0; // mark the counted element to zero
            }
        }
        if (frq[i] != 0)
        {
            frq[i] = count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (frq[i] != 0)
        {
            cout << arr[i] << " occurs " << frq[i] << " times." << endl;
        }
    }
    return 0;
}