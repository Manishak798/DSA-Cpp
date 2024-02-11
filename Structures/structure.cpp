#include <bits/stdc++.h>
using namespace std;
// structure define
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 20;
    cout << "Area of Rectangle: " << (r.length) * (r.breadth);
    return 0;
}