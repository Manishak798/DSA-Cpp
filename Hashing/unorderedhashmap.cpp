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
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
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
/*size of array: 6

element of array: 0 : 4

element of array: 1 : 1

element of array: 2 : 2

element of array: 3 : 8

element of array: 4 : 6

element of array: 5 : 1

Query data:
5
Number to query:
7
Frequency : 0
Number to query:
5
Frequency : 0
Number to query:
6
Frequency : 1
Number to query:
4
Frequency : 1
Number to query:
1
Frequency : 2*/