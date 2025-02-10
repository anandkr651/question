#include <iostream>
#include <vector>
using namespace std;
int bsearch(vector<int> &nums, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    return bsearch(nums, 0, nums.size() - 1, target);
}
int main()
{
    int k;
    vector<int> nums(7);
    cout << "enter the number" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    cout << "which elements you can find" << endl;
    cin >> k;
    cout << search(nums, k);
}
/*enter the number
1
3
7
9
11
12
45
which elements you can find
11
4
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include <iostream>
using namespace std;
bool bsearch(int *arr, int s, int start, int end)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;
    if (arr[mid] == s)
        return true;
    if (arr[mid] > s)
    {
        return bsearch(arr, s, start, mid - 1);
    }
    else
    {
        return bsearch(arr, s, mid + 1, end);
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 1, start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    bool ans = bsearch(arr, s, start, end);
    if (ans == 1)
    {
        cout << "elements is present";
    }
    else
    {
        cout << "elements is not present";
    }
}
/*elements is present
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\recrusion>*/