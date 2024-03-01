#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int num, i = 0, rem, rev, count = 0, j = 0, x = 0;
    cout << "ENTER DECIMAL NUMBER TO CONVERT TO BINARY= ";
    cin >> num;
    for (num; num > 1; num = num / 2)
    {
        rem = num % 2;
        count = count * 10 + rem;
    }
    j = count;
    for (j; j >= 0; j = j / 10)
    {
        rev = j % 10;
        // cout << rev;
        x = x * 10 + rev;
    }

    cout << "BINARY FORM=" << x;
    return 0;
}
