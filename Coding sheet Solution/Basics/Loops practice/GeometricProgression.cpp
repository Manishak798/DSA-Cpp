/*program to display G.P. series, it contains common ratio
2,6,18
common ratio= 6/2 = 3
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int starting_term, common_ratio, nth_term, series;
    cout << "ENTER FIRST TERM FOR G.P. SERIES: ";
    cin >> starting_term;
    cout << endl
         << "ENTER COMMON RATIO: ";
    cin >> common_ratio;
    cout << endl
         << "ENTER LAST TERMS FOR G.P. SERIES: ";
    cin >> nth_term;
    series = starting_term;
    for (int i = 1; i <= nth_term; i++)
    {
        cout << series << endl;
        series = series * common_ratio;
    }
    return 0;
}