#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[6] = {0};
    int sum = 0;
    cout << "enter elements ";
    for (int i = 0; i < 6; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 6; i++)
    {
        sum = sum + A[i];
    }
    cout << "Sum " << sum;
}