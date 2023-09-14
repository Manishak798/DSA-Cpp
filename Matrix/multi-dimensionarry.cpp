/*in this program we will insert multidimension array and print its output on screen*/
/*TWO DIMENSIONAL ARRAY--> 2D ARRAY*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 3, j = 3;
    int arr[i][j];
    // taking input
    cout << "enter array elements: ";
    for (int inp = 1; inp <= i; inp++)
    {
        for (int inpp = 1; inpp <= j; inpp++)
        {
            cin >> arr[inp][inpp];
        }
    }
    cout << endl;
    // output
    cout << "output: " << endl;
    for (int out = 1; out <= i; out++)
    {
        for (int outp = 1; outp <= j; outp++)
        {
            cout << arr[out][outp];
        }
        cout << endl;
    }
}