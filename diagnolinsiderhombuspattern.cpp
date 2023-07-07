#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n = 15;
    for (i = 1; i <= 2 * n - 1; i++)
    {

        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j == (n - i) + 1 || i == ((2 * n - 1) / 2) + 1 || j == ((2 * n - 1) / 2) + 1 || j == (n + i) - 1 || j == (i - n) + 1 || j == (((2 * n - 1) - i) + n))
            {
                cout << "*"
                     << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}