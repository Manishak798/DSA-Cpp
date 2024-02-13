#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    void animalsound()
    {
        cout << "this animal makes sound....";
    }
};
class Monkey : public Animal
{
public:
    void animalsound()
    {
        cout << "monkey makes sound....";
    }
};
int main()
{
    Monkey myObj;
    myObj.animalsound();
    myObj.Animal::animalsound(); // Call animalsound() from Animal class
    return 0;
}