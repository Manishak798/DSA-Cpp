#include <bits/stdc++.h>
using namespace std;
void printrecursivearray(int n, int arr[])
{
    if (n >= 0)
    {
        printrecursivearray(n - 1, arr);
        cout << arr[n] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element in array at position " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    printrecursivearray(n - 1, arr);
    return 0;
}
/*Enter size of array: 5

Enter element in array at position 0 : 1

Enter element in array at position 1 : 2

Enter element in array at position 2 : 3

Enter element in array at position 3 : 4

Enter element in array at position 4 : 5

1 2 3 4 5*/