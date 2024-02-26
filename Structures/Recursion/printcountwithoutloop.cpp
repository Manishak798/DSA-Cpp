#include <bits/stdc++.h>
using namespace std;
vector<int> printnumber(int x)
{

    vector<int> vec;
    vec.push_back(x);

    if (x != 0)
    {
        x--;
        printnumber(x);
        vec.push_back(x);
    }
    return vec;
}
int main()
{
    int x;
    cin >> x;
    vector<int> result = printnumber(x);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
}