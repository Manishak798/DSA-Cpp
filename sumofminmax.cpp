#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mini = n, maxi = 0;
    cout << "enter size of arry: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j <= n; j++)
    {
        maxi = max(maxi, arr[j]);
        mini = min(mini, arr[j]);
    }
    cout << "max= " << maxi << endl;
    cout << "min= " << mini << endl;
    cout << "sum= " << maxi + mini;
    return 0;
}