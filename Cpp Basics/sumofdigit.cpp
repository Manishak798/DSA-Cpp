#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum, rem, sum2 = 0;
    // cout << "enter number: ";
    // cin >> num;
    for (int i = 1; i <= 20; i++)
    {
        num = i;
        sum = 0;
        rem = 0;
        while (num > 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        if (sum >= 2 && sum <= 5)
        {
            cout << "sum " << sum << " " << i << " digit." << endl;
            sum2 = sum2 + sum;
        }
    }
    cout << "Sum2 " << sum2;
    return 0;
}