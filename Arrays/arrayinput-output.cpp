#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arry[6] = {0};
    // float arry[6] = {0};
    string arry[6] = {" "}; // initilize it with space not 0
    cout << "enter elements ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arry[i];
    }
    for (string x : arry)
    {
        // copy the value from arry and displaying it.
        cout << x << endl;
    }
    // it will through garbage value as array values are not initialize so initialize it to zero
}