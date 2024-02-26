#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq(5);
    deque<int> copy(2, 100);
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << "enter element: ";
        cin >> *it; // Dereference the iterator to access the element and read into it
    }
    dq.erase(dq.begin() + 1);
    dq.insert(dq.begin() + 1, copy.begin(), copy.end());
    cout << "deque elements : ";
    for (auto it : dq) // for each loop
    {
        cout << it << " ";
    }
    dq.pop_back();
    cout << endl;
    cout << "Pop deque elements : ";
    for (auto it : dq) // for each loop
    {
        cout << it << " ";
    }
    cout << endl;
    dq.swap(copy);

    cout << "Swap deque elements : ";
    for (auto it : dq) // for each loop
    {
        cout << it << " ";
    }
    dq.clear();
    cout << endl;
    cout << "Clear deque elements : ";
    for (auto it : dq) // for each loop
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
deque elements : 1 100 100 3 4 5
Pop deque elements : 1 100 100 3 4
Swap deque elements : 100 100
Clear deque elements : */