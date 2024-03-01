#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int termsOfAP = 0, count = 0; // keep a counter

    int arr[x] = {};

    for (int i = 1; count <= x; i++)
    {

        termsOfAP = (3 * i) + 2;
        if (termsOfAP % 4 != 0)
        {
            arr[count] = termsOfAP; // arr of counter to track the values
            count++;
        }
    }
    for (auto y : arr)
    {
        if (y != 0)
        {
            cout << y << " ";
        }
    }
}
