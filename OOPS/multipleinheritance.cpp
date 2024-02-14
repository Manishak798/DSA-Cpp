#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    string brand = "ford";
    void honk()
    {
        cout << "tuut, tuut....";
    }
};
class Anotherbaseclass
{
public:
    void func()
    {
        cout << "some content of another base class";
    }
};
class Car : public Vehicle, public Anotherbaseclass
{
public:
    string model = "Mustang";
};
int main()
{
    Car myObj;
    myObj.honk();
    cout << endl;
    myObj.func();
    cout << endl;
    cout << myObj.brand << " " << myObj.model;
    return 0;
}