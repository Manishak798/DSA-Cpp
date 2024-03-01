#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count, i, j;
    for (i = 1; i <= 10; i++)
    {

        for (j = 1; j <= i; j++)
        {

            if (i % 2 == 0 && j % 2 != 0)
            {
                cout << 0 << " ";
            }
            else if (i % 2 != 0 && j % 2 == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}