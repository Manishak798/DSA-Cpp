#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter a string value: ";
    cin >> s;
    cout << endl;

    // precomputing
    int hash[26] = {0};
    for (int i = 0; i < 27; i++)
    {
        hash[s[i] - 'a']++;
    }

    int query;
    cout << "Query number: ";
    cin >> query;
    cout << endl;

    while (query-- /* condition */)
    {
        // fetch
        char c;
        cout << "Enter the char: " << endl;
        cin >> c;
        cout << "Frequency of character: " << hash[c - 'a'] << endl;
        /* code */
    }

    return 0;
}

/*Enter a string value: abcdedea

Query number: 6

Enter the char:
a
Frequency of character: 2
Enter the char:
b
Frequency of character: 1
Enter the char:
d
Frequency of character: 2
Enter the char:
r
Frequency of character: 0
Enter the char:
f
Frequency of character: 0
Enter the char:
c
Frequency of character: 1*/