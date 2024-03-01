#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, rem, rev, count = 0, j, sum = 0;
    cout << "ENTER THE DECIMAL NUMBER YOU WANT TO CONVERT TO OCTAL: ";
    cin >> num;
    cout << "CONVERSION: ";
    for (num; num > 0; num = num / 8)
    {
        rem = num % 8;
        count = count * 10 + rem;
    }
    j = count;
    for (j; j > 1; j = j / 10)
    {
        rev = j % 10;
        sum = sum * 10 + rev;
        cout << sum;
    }

    return 0;
}