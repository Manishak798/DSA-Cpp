/*class methods inside class defination*/
#include <bits/stdc++.h>
using namespace std;
class myClass
{
public:
    void myMethod();
};
void myClass ::myMethod()
{
    cout << "hello world from outside the class!";
}

int main()
{
    myClass myObj;
    myObj.myMethod();
    return 0;
}