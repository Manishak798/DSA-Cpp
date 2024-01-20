// linear search using arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int key = 0;
    cout << "Enter key value to be searched: ";
    cin >> key;
    for (int i = 0; i < 8; i++)
    {
        cout << "enter array element " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }

    for (int i = 0; i < 8; i++)
    {
        if (key == arr[i])
        {
            // using for loop
            cout << "Key found at index: " << i;
        }
    }

    return 0;
}