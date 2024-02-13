#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    int salary;
    // through encapsulation we can access private data members
public:
    // setter method to set salaray
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
    Employee empObj;
    empObj.setsalary(50000);
    cout << empObj.getsalary();
    return 0;
}