#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cout << "enter testcases: ";
    cin >> t;

    while (t--)
    {
        cout << "enter n: ";
        cin >> n;
        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            // spaces
            for (int y = n; y > i; y--)
            {
                cout << " ";
            }
            // numbers
            for (int j = 1; j <= i; j++)
            {
                if (count > 9)
                {
                    count = 1;
                }
                cout << count;
                count++;
            }
            cout << endl;
        }
    }
    return 0;
}