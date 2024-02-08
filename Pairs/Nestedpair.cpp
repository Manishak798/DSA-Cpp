#include <bits/stdc++.h>
using namespace std;
void printpairs(pair<int, pair<int, int>> p)
{
    cout
        << p.first << endl
        << p.second.first << endl
        << p.second.second;
}
int main()
{
    pair<int, pair<int, int>> p;
    cout << "enter a pair value";
    cin >> p.first >> p.second.first >> p.second.second;
    printpairs(p);
    return 0;
}