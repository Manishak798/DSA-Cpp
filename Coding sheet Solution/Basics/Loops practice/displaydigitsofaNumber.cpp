/*Display digits of a number eg:237 display: 7 3 2*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, remainder;
    cout << "ENTER NUMBER YOU WANT TO DISPLAY DIGIT FOR: ";
    cin >> number;
    while (number > 0)
    {
        remainder = number % 10;
        cout << remainder << " ";
        number = number / 10;
    }
    return 0;
}