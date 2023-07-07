#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " "
                 << " ";
        }
        ch = 'A' - 1;
        for (j = 1; j <= 2 * i - 1; j++)
        {
            // cout << ch << " ";
            // if (j < i)
            // {
            //     ch++;
            // }
            // else
            // {
            //     ch--;
            // }

            if (j > i)
            {
                ch--;
            }
            else
            {
                ch++;
            }
            cout << ch << " ";
            // ch++;
        }
        cout << endl;
    }
    return 0;
}