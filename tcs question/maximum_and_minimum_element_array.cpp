#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size an array";
    cin >> n;
    int arr[n], large = INT_MIN, small = INT_MAX;
    cout << "enter the element of an array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << "largest element in this array " << large << endl;
    cout << "smallest element in this array " << small;
}
/*enter the size an array5
enter the element of an array67
54
908
879
4216
largest element in this array 4216
smallest element in this array 54
PS D:\question\tcs question>*/