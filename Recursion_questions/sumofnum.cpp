/*Write a program in C to calculate the sum of numbers from 1 to n using recursion.
Test Data :
Input the last number of the range starting from 1 : 5
Expected Output:

The sum of numbers from 1 to 5 :
15*/
#include <bits/stdc++.h>
using namespace std;

int sumnaturalnum(int n)
{
    int res;
    if (n == 1)
    {
        return (1);
    }
    else if (n != 0)
    {

        res = n + sumnaturalnum(n - 1);
    }
    return res;
}

int main()
{
    int n, sum;
    cout << "Enter how many num you want to sum: ";
    cin >> n;

    sum = sumnaturalnum(n);
    cout
        << "SUM OF NATURAL NUMBERS ARE: " << sum;
    return 0;
}