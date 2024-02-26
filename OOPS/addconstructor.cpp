#include <bits/stdc++.h>
using namespace std;
class myAddition
{
public:
    myAddition(int x, int y) // constructor having same name as the class
    {
        cout << "Sum: " << x + y;
    }
};
int main()
{
    myAddition myObj(4, 5);
    return 0;
}