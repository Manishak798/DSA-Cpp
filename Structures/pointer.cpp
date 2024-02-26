#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    // declare a pointer to store address of a
    int *p; // declaration
    p = &a; // initialization
    cout << "Adress of var a: " << p << endl;
    cout << "Value of var a accessed by pointer(derefrencing): " << *p << endl;

    return 0;
}