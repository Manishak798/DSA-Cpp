#include <bits/stdc++.h>
using namespace std;
int main()
{
    int menu_index;
    int number1, number2;
    cout << "Here's a mini calculator" << endl
         << endl;
    cout << "ENTER THE VALUE OF NUMBER-1: ";
    cin >> number1;
    cout << endl;
    cout << "ENTER THE VALUE OF NUMBER-2: ";
    cin >> number2;
    cout << endl;
    cout << "Please tell us by providing a numeric value what kind of arithmeetic operation you want to perform: " << endl
         << endl
         << "1. ADDITION" << endl
         << "2. SUBTRACTION" << endl
         << "3. MULTIPLICATION" << endl
         << "4. DIVISION" << endl;
    cin >> menu_index;
    switch (menu_index)
    {
    case 1:
        cout << "ADITION = " << number1 + number2;
        break;
    case 2:
        cout << "SUBTRACTION = " << number1 - number2;
        break;
    case 3:
        cout << "MULTIPLICATION = " << number1 * number2;
        break;
    case 4:
        cout << "DIVISION = " << number1 / number2;
        break;
    default:
        cout << "OOPS!! Invalid-Input";
        break;
    }
    return 0;
}