#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n = 15;
    for (i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "*"
                     << "  ";
            }
            for (j = 1; j <= (2 * n) - (2 * i); j++)
            {
                cout << " "
                     << " ";
            }
            for (j = 1; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        else
        {
            for (j = 1; j <= ((2 * n - i) + 1); j++)
            {
                cout << "*"
                     << " ";
            }
            for (j = 1; j <= (((2 * i) - (2 * n)) - 2); j++)
            {
                cout << " "
                     << " ";
            }
            for (j = 1; j <= ((2 * n - i) + 1); j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
