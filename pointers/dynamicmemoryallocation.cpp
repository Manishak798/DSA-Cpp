#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Pointers in CPP */
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = new int[5]{1, 2, 3}; // memory allocated inside heap
    cout << ptr[0] << endl;
    ptr++;
    cout << ptr[1];
    delete ptr; // prevents memory leak
    return 0;
}
