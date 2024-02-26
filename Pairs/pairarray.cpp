#include <bits/stdc++.h>
using namespace std;
void printpairs(pair<int, int> p[])
{
    cout << p[1].first << endl
         << p[1].second;
}
int main()
{
    pair<int, int> p[4] = {{1, 2}, {3, 4}, {4, 5}, {6, 7}};

    printpairs(p);
    return 0;
}