/*Write a program in C to print the Fibonacci Series using recursion. >
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10
 The Series are :
 1  1  2  3  5  8  13  21  34  55  */
#include <bits/stdc++.h>
using namespace std;
int printFibonacci(int n)
{
    if (n == 0)
    {
        return (0);
    }
    else if (n == 1)
    {
        return (1);
    }
    else
    {
        return (printFibonacci(n - 2) + printFibonacci(n - 1));
    }
}
int main()
{
    int n;
    cout << "Enter the limit to print fibonacci series: ";
    cin >> n;
    printFibonacci(n);
    cout << "The Series are:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << printFibonacci(i) << " ";
    }
    return 0;
}
/*Enter the limit to print fibonacci series: 5
The Series are:
0 1 1 2 3 */