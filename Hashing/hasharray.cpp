#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "size of array: ";
    cin >> size;
    cout << endl;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "element of array: " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }

    // precomputing
    int hash[size + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }

    int query;
    cout << "Query data: " << endl;
    cin >> query;
    while (query-- /* condition */)
    {
        int number;
        cout << "Number to query: " << endl;
        cin >> number;
        cout << "Frequency : " << hash[number] << endl;
        /* fetch */
    }
}
/*size of array: 5

element of array: 0 : 1

element of array: 1 : 2

element of array: 2 : 1

element of array: 3 : 2

element of array: 4 : 4

Query data:
5
Number to query:
2
Frequency : 2
Number to query:
1
Frequency : 2
Number to query:
5
Frequency : 0
Number to query:
4
Frequency : 1
Number to query:
1
Frequency : 2*/