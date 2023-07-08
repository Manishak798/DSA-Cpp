/*Check if the number is Plaindrome or NOT.
Palindrome number are those numbers whose reverse is equal to the actual number.
eg: 121 :-- reverse== 121
    123 :-- reverse!= 321
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, remainder, reverse = 0, duplicate_copy_of_number;
    cout << "ENTER A NUMBER YOU WANT TO CHECK PALINDROME FOR: ";
    cin >> number;
    duplicate_copy_of_number = number;
    while (number > 0)
    {
        remainder = number % 10;
        reverse = (reverse * 10) + remainder; /*if we directly reverse it inside loop then it will be single digits but not a whole number.*/
        number = number / 10;
    }
    if (reverse == duplicate_copy_of_number)
    {
        cout << endl
             << duplicate_copy_of_number << " is a Palindrome Number. ";
    }
    else
    {
        cout << endl
             << duplicate_copy_of_number << " is NOT a Palindrome Number.";
    }
    return 0;
}