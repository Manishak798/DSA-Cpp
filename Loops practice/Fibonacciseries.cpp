/*fibonacci series 0,1,1,2,3,5.........
sum of previous terms
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, fib0 = 0, fib1 = 1, fib_n;
    cout << "ENTER Nth TERM YOU WANT FIBONACCI SERISE FOR: ";
    cin >> number;
    cout << fib0 << " " << fib1 << " ";
    for (int i = 2; i <= number; i++)
    {
        fib_n = fib0 + fib1;
        cout << fib_n << " ";
        fib0 = fib1;
        fib1 = fib_n;
    }
    return 0;
}