// Write a program in C to print the first 50 natural numbers using recursion.
// Expected Output:

//  The natural numbers are : 1  2  3
//   4  5  6  7  8  9  10  11  12  13
//   14  15  16  17  18  19  20  21
// 22  23  24  25  26  27  28  29  30
//   31  32  33  34  35  36  37  38
// 39  40  41  42  43  44  45  46  47
//   48  49  50
#include <bits/stdc++.h>
using namespace std;
void printnaturalnum(int n)
{
    if (n != 0)
    {
        printnaturalnum(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int n;
    cout << "Enter how many num you want to print: ";
    cin >> n;
    cout
        << "NATURAL NUMBERS ARE: ";
    printnaturalnum(n);
    return 0;
}
/*
OUTPUT
Enter how many num you want to print: 10
NATURAL NUMBERS ARE: 1 2 3 4 5 6 7 8 9 10
*/