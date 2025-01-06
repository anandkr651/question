#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int end = nums.size();
    int start = 0;
    int mid = start + (end - start) / 2;

    if (target > nums[end - 1])
    {
        return end;
    }

    while (start <= end)
    {
        if (target == nums[mid])
        {
            return mid;
        }

        if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "enter the target element: ";
    cin >> target;
    int ans = searchInsert(nums, target);
    cout << "return the index where it would be if it were inserted in order: " << ans << endl;
    return 0;
}
/*Enter the size of array: 4
Enter the elements of array: 1
3
5
6
enter the target element: 2
return the index where it would be if it were inserted in order: 1
PS D:\question\question>*/