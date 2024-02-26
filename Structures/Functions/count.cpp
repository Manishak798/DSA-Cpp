#include <bits/stdc++.h>
using namespace std;
int inp = 1;

vector<int> printcount(int n)
{
    vector<int> vec;
    if (inp <= n)
    {
        vec.push_back(inp);
        inp++;
        printcount(n);
    }
    return vec;
}
int main()
{
    int n;
    cin >> n;

    printcount(n);
    for (auto it : vec)
    {
        cout << it << " ";
    }
    return 0;
}