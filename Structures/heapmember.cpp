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
    // pointer to structure
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 10;
    p->breadth = 20;
    cout << "value of length: " << p->length << endl;
    cout << "value of breadth: " << p->breadth << endl;
    cout << "Area: " << (p->length) * (p->breadth) << endl;
    return 0;
}