#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    myClass() // constructor having same name as the class
    {
        cout << "hello world, I am a constructor!";
    }
};
int main()
{
    myClass myObj; // constructor call itself

    return 0;
}