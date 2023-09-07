#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1)//where to use while loop and where for loop
    {
        if (n % 2 == 0)
        {

            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    return 0;
}