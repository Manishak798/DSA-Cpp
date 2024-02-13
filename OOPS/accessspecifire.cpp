#include <bits/stdc++.h>
using namespace std;
class myClass
{
private:
    int y = 10; // declared as inaccessible
public:
    int x = 5;
    myClass() // constructor having same name as the class
    {
        cout << "hello world!";
    }
};
int main()
{
    myClass myObj;
    cout << myObj.x;
    // cout << myObj.y;
    return 0;
}
/*cessspecifire.cpp:18:19: error: 'int myClass::y' is private within this context
     cout << myObj.y;
                   ^
accessspecifire.cpp:6:13: note: declared private here
     int y = 10; // declared as inaccessible
             ^~*/