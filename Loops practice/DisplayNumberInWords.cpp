/*Display Number in words even with tailing zeros.
1700 --> if we reverse it --> 71 but not zeros so for including zeros as well we will store te number in strings and then concatenate them.
after that we will use switch case to print words like 0--> ZERO; 1-->ONE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, remainder;
    string str;
    char c;
    cout << "ENTER A NUMBER : ";
    cin >> number;
    cout << endl;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        str = str + to_string(remainder); // to_string()method is used to convert integer into string we use it because without it we cannot add string and integer together.
    }
    for (int initial = str.length() - 1; initial >= 0; initial--)
    {
        c = str.at(initial); // str.at() method is used to point specific position of string
        switch (c)
        {
        case '0':
            cout << "zero ";
            break;
        case '1':
            cout << "one ";
            break;
        case '2':
            cout << "two ";
            break;
        case '3':
            cout << "three ";
            break;
        case '4':
            cout << "four ";
            break;
        case '5':
            cout << "five ";
            break;
        case '6':
            cout << "six ";
            break;
        case '7':
            cout << "seven ";
            break;
        case '8':
            cout << "eight ";
            break;
        case '9':
            cout << "nine ";
            break;
        }
    }
    return 0;
}