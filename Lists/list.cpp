#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls(5);
    vector<int> copy(2, 100);
    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << "enter element: ";
        cin >> *it; // Dereference the iterator to access the element and read into it
    }
    ls.erase(next(ls.begin(), 1));
    ls.insert(next(ls.begin(), 1), copy.begin(), copy.end());
    cout << "list elements : ";
    for (auto it : ls) // for each loop
    {
        cout << it << " ";
    }
    ls.pop_back();
    cout << endl;
    cout << "Pop list elements : ";
    for (auto it : ls) // for each loop
    {
        cout << it << " ";
    }
    cout << endl;
    //swap
    // ls.swap(copy);swap does not work with diffrent container

    // cout << "Swap lstor elements : ";
    // for (auto it : ls) // for each loop
    // {
    //     cout << it << " ";
    // }
    ls.clear();
    cout << endl;
    cout << "Clear list elements : ";
    for (auto it : ls) // for each loop
    {
        cout << it << " ";
    }
    return 0;
}
/*enter element: 1
enter element: 2
enter element: 3
enter element: 4
enter element: 5
list elements : 1 100 100 3 4 5
Pop list elements : 1 100 100 3 4

Clear list elements :*/
