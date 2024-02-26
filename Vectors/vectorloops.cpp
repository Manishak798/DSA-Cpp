#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(5);
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << "enter element: ";
        cin >> *it; // Dereference the iterator to access the element and read into it
    }
    vec.erase(vec.begin() + 1);
    cout << "vector elements : ";
    for (auto it : vec) // for each loop
    {
        cout << it << " ";
    }

    return 0;
}
// output
/*enter element: 1
enter element: 2
enter element: 3
enter element: 4
enter element: 5
vector elements : 1 2 3 4 5 */

/*enter element: 1
enter element: 2
enter element: 3
enter element: 4
enter element: 5
vector elements : 1 3 4 5*/