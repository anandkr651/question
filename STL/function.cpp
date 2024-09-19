#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    int arr[] = {1, 5, 3, 9, 6, 2, 22};
    sort(arr, arr + 5);

    //  for(int i:arr)
    //  {
    //     cout<<i<<" ";
    //  }cout<<endl;

    // OR --- both the types you can print the arr.

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + 7, greater<int>());
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
/*1 3 5 6 9 2 22
22 9 6 5 3 2 1
PS C:\Users\DELL\OneDrive\Desktop\question\STL> */