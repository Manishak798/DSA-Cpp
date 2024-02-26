#include <bits/stdc++.h>
using namespace std;
class Employee
{
protected: // it can be accessed in the inherited class
    int salary;
};
class Programmer : public Employee
{
public:
    int bonus;
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    Programmer Obj;
    Obj.setsalary(500000);
    Obj.bonus = 15000;
    cout << "Salary: " << Obj.getsalary() << endl;
    cout << "Bonus: " << Obj.bonus;
    return 0;
}