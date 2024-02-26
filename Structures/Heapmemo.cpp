#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    // allocate memory in heap--> create an array of sixe 5 in heap
    p = (int *)malloc(5 * sizeof(int)); // int arr[5];//c-lang
    p = new int[5];                     // cpp-lang
    // Allocate memory in heap - create an array of size 5 in heap
    p = new int[5]; // C++ way of allocating dynamic memory

    // Inserting values into the dynamically allocated array
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1; // Assigning values to array elements
    }

    // Printing the values stored in the dynamically allocated array
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    // Don't forget to deallocate memory to avoid memory leaks
    delete[] p;
    return 0;
}