#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, number, n = 5, space;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (number = 1; number <= i; number++)
        {
            if (number == 1 || number == i || i == n)
            {
                cout << number
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