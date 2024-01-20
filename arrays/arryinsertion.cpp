// declaration and initialization of array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter array element " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "created array: [ ";
    for (int i = 0; i < 5; i++)
    {
        // using for loop
        cout << arr[i] << " , ";
    }
    // using for each loop
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "]";
    return 0;
}