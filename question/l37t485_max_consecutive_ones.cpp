#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums)
{
    int n = nums.size();
    int count = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = solve(nums);
    cout << "The maximum number of consecutive ones are: " << ans << endl;
    return 0;
}
/*Enter the size of array: 6
Enter the elements of array: 1
1
0
1
1
1
The maximum number of consecutive ones are: 3
PS D:\question\question>*/