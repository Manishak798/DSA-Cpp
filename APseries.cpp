#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1, i, sum = 0, diff, ap = 0;
    cout << "A.P. SERIES IS: ";
    for (i = num; i <= 40;)
    {
        ap = i;
        cout << ap << " ";
        sum = sum + ap;
        i = i + 4;
    }
    cout << endl;
    cout << "SUM OF THE A.P. SERIES IS = " << sum;
    return 0;
}