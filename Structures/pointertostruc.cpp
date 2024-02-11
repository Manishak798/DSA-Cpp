#include <bits/stdc++.h>
using namespace std;
struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 30};
    // pointer to structure
    struct Rectangle *p = &r;
    cout << "value of length: " << (*p).length << endl;
    cout << "value of breadth: " << (*p).breadth << endl;
    cout << "Area: " << ((*p).length) * ((*p).breadth) << endl;

    return 0;
}