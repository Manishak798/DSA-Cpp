/*2. Write a Program to Find the sum of all elements in a 2d array or Matrix.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 3, j = 3, sum = 0;
    int arr[i][j] = {0, 0, 0};
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
    // output sum
    for (int out = 1; out <= i; out++)
    {
        for (int outp = 1; outp <= j; outp++)
        {
            sum = sum + arr[out][outp]; // adding elements
        }
    }
    cout << "Sum Of All Elements of The Matrix: " << sum;
    return 0;
}
