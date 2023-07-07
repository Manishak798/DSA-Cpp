#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, sum = 0, count = 0, rem, a = 0, rev = 0;
    cout << "ENTER THE BINARY NUMBER YOU WANT TO CONVERT INTO DECIMAL: ";
    cin >> num;
    for (num; num >= 1; num = num / 10)
    {
        rem = num % 10;
        a = pow(2, count) * rem;
        // cout << a << " ";
        count++;
        sum = sum + a;

        // for (i = 0; i < count; i++)
        // {
        //     for (num; num >= 1; num = num / 10)
        //     {
        //         rem = num % 10;

        // sum = sum + a;
        //     }
        // }
    }

    // cout << sum;

    cout << "DECIMAL FORM= " << sum;
    return 0;
}