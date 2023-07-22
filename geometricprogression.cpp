#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a = 1, sum = 0, r, n;
    cout << "enter common ratio: ";
    cin >> r;
    cout << "enter number of terms: ";
    cin >> n;
    n = a * (pow(r, n - a));
    cout << "G.P. SERIES WILL BE: ";
    for (a = 1; a <= n; a = a * r)
    {
        cout << a << " ";
        sum = sum + a;
    }
    cout << endl;
    cout << "SUM OF GP= " << sum;

    return 0;
}