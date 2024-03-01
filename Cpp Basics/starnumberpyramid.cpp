#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n = 9;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * n - i) - 1; j++)
        {
            cout << "*";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << i;
            }
        }
        for (j = 1; j <= (2 * n - i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}