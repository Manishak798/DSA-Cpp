#include <bits/stdc++.h>
typedef long long ll; // type name for shortning names
#define f first;      // macros for defining variables
#define s second;
using namespace std;
int main()
{
    ll num = 100000, first, second;
    cin >> first >> second;
    if (num % first == 0)
    {
        cout << "true";
    }
    else if (num % second == 0)
    {
        cout << "false";
    }
}
