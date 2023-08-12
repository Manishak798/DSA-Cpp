/*Counting digits of a number eg:237 count=3*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, count = 0;
    cout << "ENTER NUMBER YOU WANT TO DISPLAY DIGIT FOR: ";
    cin >> number;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    cout << endl;
    cout << count << " digits number.";
    return 0;
}