#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(5);
    vector<int> copy(2, 100);
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << "enter element: ";
        cin >> *it; // Dereference the iterator to access the element and read into it
    }
    vec.erase(vec.begin() + 1);
    vec.insert(vec.begin() + 1, copy.begin(), copy.end());
    cout << "vector elements : ";
    for (auto it : vec) // for each loop
    {
        cout << it << " ";
    }
    vec.pop_back();
    cout << endl;
    cout << "Pop vector elements : ";
    for (auto it : vec) // for each loop
    {
        cout << it << " ";
    }
    cout << endl;
    vec.swap(copy);

    cout << "Swap vector elements : ";
    for (auto it : vec) // for each loop
    {
        cout << it << " ";
    }
    vec.clear();
    cout << endl;
    cout << "Clear vector elements : ";
    for (auto it : vec) // for each loop
    {
        cout << it << " ";
    }
    return 0;
}
/*OUTPUT:
enter element: 1
enter element: 2
enter element: 3
enter element: 4
enter element: 5
vector elements : 1 100 100 3 4 5
Pop vector elements : 1 100 100 3 4
Swap vector elements : 100 100
Clear vector elements :*/