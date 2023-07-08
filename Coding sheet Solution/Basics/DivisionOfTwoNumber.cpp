/* Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int divisor, dividend, quotient, remainder;
    cout << "ENTER THE VALUE FOR DIVISOR: ";
    cin >> divisor;
    cout << endl;
    cout << "ENTER THE VALUE FOR DIVIDEND: ";
    cin >> dividend;
    cout << endl;
    quotient = divisor / dividend;
    remainder = divisor % dividend;
    cout << "QUOTIENT = " << quotient << endl;
    cout << "REMAINDER = " << remainder;
    return 0;
}