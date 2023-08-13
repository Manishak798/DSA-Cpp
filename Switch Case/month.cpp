#include <bits/stdc++.h>
using namespace std;
int main()
{
    int month;
    cout << "ENTER A NUMBERIC VALUE TO CHECK WHAT MONTH IT IS: ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "JANUARY";
        break;
    case 2:
        cout << "FEBRUARY";
        break;
    case 3:
        cout << "MARCH";
        break;
    case 4:
        cout << "APRIL";
        break;
    case 5:
        cout << "MAY";
        break;
    case 6:
        cout << "JUNE";
        break;
    case 7:
        cout << "JULY";
        break;
    case 8:
        cout << "AUGUST";
        break;
    case 9:
        cout << "SEPTEMBER";
        break;
    case 10:
        cout << "OCTOBER";
        break;
    case 11:
        cout << "NOVERMBER";
        break;
    case 12:
        cout << "DECEMBER";
        break;
    default:
        cout << "OOPS!! Invalid-Input";
        break;
    }
    return 0;
}