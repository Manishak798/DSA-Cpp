// declaration and initialization of 2D array
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[5][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "enter array element " << i << j << " : ";
            cin >> arr[i][j];
            cout << endl;
        }
    }
    cout << "created array: [ ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // using for loop
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";
    return 0;
}
