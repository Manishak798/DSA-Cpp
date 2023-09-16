/*5. Write a Program to find the multiplication of two matrices.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 3, j = 3, m = 3, n = 3, sum = 0;
    int arr[i][j] = {0, 0, 0};
    int arry[m][n] = {0, 0, 0};
    // taking inp
    cout << "enter elements of 1st matrix: ";
    for (int inp = 1; inp <= i; inp++)
    {
        for (int inpp = 1; inpp <= j; inpp++)
        {
            cin >> arr[inp][inpp];
        }
    }
    cout << endl;
    cout << "enter elements of 2st matrix: ";
    for (int inpu = 1; inpu <= i; inpu++)
    {
        for (int inppt = 1; inppt <= j; inppt++)
        {
            cin >> arry[inpu][inppt];
        }
    }
    cout << endl;
    // output sum
    for (int out = 1; out <= i; out++)
    {
        for (int outp = out; outp <= out; outp++)
        {
            sum = (arr[out][outp] * arry[out][outp]) + sum; // multiplying elements just change name of array dimention will be same
            cout << " " << sum << " ";                      // output multiplication
        }

        cout << endl;
    }

    return 0;
}