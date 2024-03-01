#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S, E, W, cel, t;
    cout << "enter test cases: ";
    cin >> t;
    cout << "enter starting farhenite value: ";
    cin >> S;
    cout << "enter ending farhenite value: ";
    cin >> E;
    cout << "enter farhenite step: ";
    cin >> W;
    while (t--)
    {

        for (int i = S; i <= E; i = i + W)
        {
            cel = 0;
            cel = ((i - 32) * 5) / 9;
            cout << i << " " << cel << endl;
        }
    }
    return 0;
}