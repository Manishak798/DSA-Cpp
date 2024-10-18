/*Display Arithmetic Progression series
5,10,15,20,25,30....so on..
ap series has a common diffrence, a starting term, nth term ending term
best */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int starting_term, common_difference, nth_term, series;
    cout << "ENTER FIRST TERM FOR A.P. SERIES: ";
    cin >> starting_term;
    cout << endl
         << "ENTER COMMON DIFFRENCE: ";
    cin >> common_difference;
    cout << endl
         << "ENTER LAST TERMS FOR A.P. SERIES: ";
    cin >> nth_term;
    series = starting_term;
    for (int i = 1; i < nth_term; i++)
    {
        cout << series << endl;
        series = series + common_difference;
    }
    return 0;
}
