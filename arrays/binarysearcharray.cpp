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
    int low = 0, high = 8, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << "Key found " << mid;
            return 0;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Key not found!";
    return 0;
}