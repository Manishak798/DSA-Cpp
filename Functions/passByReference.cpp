#include <bits/stdc++.h>
using namespace std;

void addTen(int &number)
{
    number += 10;
    cout << "NUMBER AFTER ADDING IT TO TEN: " << number << endl;
}

int main()
{
    int num = 5;
    cout << "ACTUAL Number: " << num << endl;
    addTen(num);
    cout << "number after passing by reference: " << num;
}
/**
 * @brief
 * ACTUAL Number: 5
NUMBER AFTER ADDING IT TO TEN: 15
number after passing by reference: 15
 *
 */
