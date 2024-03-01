#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num, cube = 0, sum = 0, rem, j, count = 0, m, k;
    cout << "ENTER NUMBER YOU WANT TO CHECK WHEATHER IT IS A ARMSTRONG NUMBER OR NOT: ";
    cin >> num;
    k = num;
    j = num;
    for (num; num > 0; num = num / 10)
    {
        rem = num % 10;
        count++;
    }
    m = count;
    for (j; j > 0; j = j / 10)
    {
        rem = j % 10;
        cube = pow(rem, m);
        sum = sum + cube;
    }

    if (sum == k)
    {
        cout << k << " is a ARMSTRONG NUMBER.";
    }
    else
    {
        cout << k << " is NOT a ARMSTRONG NUMBER.";
    }
    return 0;
}
