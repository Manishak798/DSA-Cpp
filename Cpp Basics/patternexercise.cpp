#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, count = 1;
    cout << "enter value of n= ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    return 0;
}