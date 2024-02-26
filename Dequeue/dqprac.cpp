#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    cout << dq[0] << " " << dq[1] << " " << dq[2];
    cout << endl
         << "after pop ";
    dq.pop_back();
    cout << dq[0] << " " << dq[1] << " " << dq[2];

    return 0;
}