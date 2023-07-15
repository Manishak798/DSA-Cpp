#include <bits/stdc++.h>
using namespace std;
int main()
{
    float num;
    float rem = 0;
    string rem2;
    cout << "enter num:- ";
    cin >> num;
    // for (int i = 1; i <= 3; i++)
    // {
    //     rem = num * 0.1;
    //     // cout << rem << endl;
    //     num = rem;
    //     // cout << num << endl;
    // }
    while (floor(num) > 0)
    {
        rem = num * 0.1; // this program is used to make a integer number to a float number.
        num = rem;
    }
    rem2 = to_string(num);
    cout << rem2;
}