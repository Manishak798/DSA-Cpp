#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, sum = 0;
    cout << "ENTER A NUMBER UPTO YOU WANT SUM FOR: ";
    cin >> number;
    for (int initial = 1; initial <= number; initial++)
    {
        cout << initial << " + ";
        sum = sum + initial;
    }
    cout << endl;
    cout << "SUM = " << sum;
    return 0;
}