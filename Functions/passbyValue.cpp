// pass by value --- Function
#include <bits/stdc++.h>
using namespace std;

void multiplyByTen(int number)
{
    number *= 10;
    cout << "After Multiplication : " << number << endl;
}
int main()
{
    int num = 5;
    cout << "Actual number: " << num << endl;
    multiplyByTen(num);
    cout << "Number after pass by value function worked: " << num;
    return 0;
}
/**
 * @brief
 * Actual number: 5
After Multiplication : 50
Number after pass by value function worked: 5
 *
 */