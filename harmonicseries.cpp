#include <bits/stdc++.h>
using namespace std;
int main()
{
    // harmonic series
    float i, sum = 0, term, cons = 1, x = 0;
    cout << "ENTER THE VALUE OF TERM YOU WANT THE SUM OF HARMONIC SERIES= ";
    cin >> term;
    for (i = 1; i <= term; i++)
    {
        x = cons / i;
        sum = sum + x;
    }
    cout << "SUM= " << sum;
    return 0;
}