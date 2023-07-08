/*Check if a number is a Armstrong number or not.*/
/* Armstrong numbers are the number when we cube therir digit the sum is equal to actual digit
       eg:153
       1*1*1+5*5*5+3*3*3=153
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, remainder, sum = 0, duplicate_copy_of_number;
    cout << "ENTER NUMBER YOU WANT TO CHECK ARMSTRONG FOR: ";
    cin >> number;
    duplicate_copy_of_number = number;
    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }
    if (sum == duplicate_copy_of_number)
    {
        cout << endl
             << duplicate_copy_of_number << " is a ARMSTRONG NUMBER.";
    }
    else
    {
        cout << endl
             << duplicate_copy_of_number << " is not a ARMSTRONG NUMBER.";
    }
    return 0;
}