#include <bits/stdc++.h>
using namespace std;
void printpairs(pair<int, int> p)
{
    cout << p.first << endl
         << p.second;
}
int main()
{
    pair<int, int> p;
    cout << "enter a pair value";
    cin >> p.first >> p.second;
    printpairs(p);
    return 0;
}