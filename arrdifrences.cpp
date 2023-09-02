#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, diff = 0;
    cout << "enter size of arr: ";
    cin >> n;
    cout << "enter diffrence element: ";
    cin >> k;
    int arr[n];
    // cout << "enter arr elements: ";
    // 5 3
    // 4 3 2 1 5
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int x = 0; x < n; x++)
    {
        for (int j = 0; j < n; j++)
        {
            diff = 0;
            diff = abs(arr[x] - arr[j]);
            if (diff == k)
            {
                count++;
            }
        }
    }
    if (count >= 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
// 7 12
// -3 5 -2 4 1 0 9