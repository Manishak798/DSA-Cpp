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
class Car : public Vehicle
{
public:
    string model = "Mustang";
};
int main()
{
    Car myObj;
    myObj.honk();
    cout << endl;
    cout << myObj.brand << " " << myObj.model;
    return 0;
}