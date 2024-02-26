#include <bits/stdc++.h>
using namespace std;
vector<int> printnumber(int x)
{

        vector<int> vec;
    vec.push_back(x);
    x--;
    for (auto it : vec)
    {
        cout << it << " ";
    };
    if (x != 0)
    {
        printnumber(x);
    }
}
int main()
{
    int x;
    cin >> x;
    printnumber(x);
}