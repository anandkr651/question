#include <iostream>
using namespace std;
bool issorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remaining = issorted(arr + 1, size - 1); // recrusion
        return remaining;
    }
}

int main()
{
    int arr[7] = {2, 4, 5, 7, 11, 9, 10};
    int size = 7;
    bool ans = issorted(arr, size);
    if (ans == 1)
        cout << "array is sorted";
    else
    {
        cout << "array is not sorted";
    }
    return 0;
}
/*array is not sorted
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/