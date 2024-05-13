#include <iostream>
using namespace std;
bool lsearch(int arr[], int s, int size)
{
    if (size == 0)
        return 0;
    if (arr[0] == s)
        return true;
    else
    {
        bool ream = lsearch(arr + 1, s, size - 1);
        return ream;
    }
}
int main()
{
    int arr[5] = {3, 6, 2, 9, 8};
    int s = 11, size = 5;
    bool ans = lsearch(arr, s, size);
    if (ans == 1)
    {
        cout << "elements is found";
    }
    else
    {
        cout << "elements is not found";
    }
}
/*elements is not found
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion> */