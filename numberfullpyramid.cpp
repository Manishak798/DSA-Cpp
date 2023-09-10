#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, number, n = 5, space, count = 0;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << " "
                 << " ";
        }
        for (number = 1; number <= 2 * i - 1; number++)
        {

            if (number > i)
            {
                count--;
            }
            else
            {
                count++;
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}