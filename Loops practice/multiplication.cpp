#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "ENTER A NUMBER YOU WANT TABLE FOR: ";
    cin >> number;
    for (int initial = 1; initial <= 10; initial++)
    {
        cout << number << " x " << initial << " = " << number * initial;
        cout << endl;
    }
    return 0;
}