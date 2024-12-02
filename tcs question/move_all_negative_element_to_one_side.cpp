#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of an array ";
    cin >> n;
    int arr[n], first = 0, last = n - 1;
    cout << "enter the element of an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (first < last)
    {
        if (arr[first] < 0)
        {
            first++;
        }
        else if (arr[last] > 0)
        {
            last--;
        }
        else
        {
            swap(arr[first], arr[last]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
/*enter the size of an array 5
enter the element of an array -13
22
8
2
-2
-13 -2 8 2 22
PS D:\question\tcs question> */