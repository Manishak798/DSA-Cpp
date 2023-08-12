#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N, i, sum, rem;
    cout << "enter N: ";
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum = 0;
            while (j > 0)
            {
                rem = j % 10;
                sum = sum + rem;
            }
        }
    }
    cout << "digit " << N << " "
         << "sum " << sum;
    return 0;
}