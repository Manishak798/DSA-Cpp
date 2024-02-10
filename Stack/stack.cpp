#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st[10];
    // st[0].push(1);
    // st[1].push(2);
    // st[2].push(3);
    // st[3].push(4);
    // st[4].push(5);
    int element;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter element: ";
        cin >> element;
        while (st[i].empty())
        {
            st[i].push(element);
        }
        cout << endl;
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << "Stack " << i << " elements: ";
        while (!st[i].empty())
        {
            cout << st[i].top() << " ";
            st[i].pop();
        }
        cout << endl;
    }

    return 0;
}
/*enter element: 1

enter element: 2

enter element: 3

enter element: 4

enter element: 5

Stack 0 elements: 1
Stack 1 elements: 2
Stack 2 elements: 3
Stack 3 elements: 4
Stack 4 elements: 5*/