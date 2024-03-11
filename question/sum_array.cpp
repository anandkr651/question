#include <iostream>
using namespace std;
int sum(int *arr, int size)
{
    if (size == 1)
        return arr[0];
    return (arr[0] + sum(arr + 1, size - 1));
}
int main()
{
    int arr[5] = {3, 5, 2, 8, 4};
    int size = 5;
    int ans = sum(arr, size);
    cout << "sum is " << ans;
}
/*sum is 22
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/