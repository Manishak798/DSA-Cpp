#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.emplace_back(2);
    vec.push_back(3);
    cout << vec[0] << " " << vec[1] << " " << vec[2];
}