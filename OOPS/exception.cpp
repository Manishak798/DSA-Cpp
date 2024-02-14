#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        /* code */
        int age;
        cout << "Enter your age: ";
        cin >> age;
        if (age >= 18)
        {
            cout << endl
                 << "Access granted you are old enough.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int num)
    {
        cout << endl
             << "Access Denied - you must be at least 18 years old. ";
        cout << endl
             << "Age is: " << num;
    }
    return 0;
}