// declaration and initialization of ptr
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;      // declaration
    ptr = &arr[0]; // ptr storing address of arr 0 index value
    cout << arr[0] << endl;
    cout << &arr[0] << endl;
    cout << ptr;

    return 0;
}