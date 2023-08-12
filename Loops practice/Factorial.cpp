#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long number, fact = 1;
    cout << "ENTER NUMBER YOU WANT FACTORIAL FOR: ";
    cin >> number;
    for (int initial = 1; initial <= number; initial++)
    {
        cout << initial << " x ";
        fact = fact * initial;
    }
    cout << endl;
    cout << "VALUE OF " << number << "! :" << fact;
    return 0;
}