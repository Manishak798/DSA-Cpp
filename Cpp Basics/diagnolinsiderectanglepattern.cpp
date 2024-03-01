#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n = 8;
    for (i = 1; i <= (2 * n - n) + 2; i++)
    {
        for (j = 1; j <= (2 * n - n) + 2; j++)
        {
            if (i == 1 || j == 1 || j == (2 * n - n) + 2 || j == i || i == (2 * n - n) + 2 || j == ((((2 * n - n) + 2) - i) + 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}