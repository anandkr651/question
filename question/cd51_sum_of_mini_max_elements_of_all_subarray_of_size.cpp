// #include <iostream>
// #include <deque>
// using namespace std;
// int solve(int *arr, int n, int k)
// {
//     deque<int> maxi(k);
//     deque<int> mini(k);

//     // addition of first size k window
//     for (int i = 0; i < k; i++)
//     {
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//         {
//             maxi.pop_back();
//         }
//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//         {
//             mini.pop_back();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);
//     }
//     int ans = 0;
//     for (int i = k; i < n; i++)
//     {
//         ans += arr[maxi.front()] + arr[mini.front()];
//         // next window
//         // removal
//         while (!maxi.empty() && i - maxi.front() >= k)
//         {
//             maxi.pop_front();
//         }
//         while (!mini.empty() && i - mini.front() >= k)
//         {
//             mini.pop_front();
//         }
//         // addition
//         while (!maxi.empty() && arr[maxi.back()] <= arr[i])
//         {
//             maxi.pop_back();
//         }
//         while (!mini.empty() && arr[mini.back()] >= arr[i])
//         {
//             mini.pop_back();
//         }
//         maxi.push_back(i);
//         mini.push_back(i);
//     }
//     // make sure to consider last wali window
//     ans += arr[maxi.front()] + arr[mini.front()];
//     return ans;
// }
// int main()
// {
//     int arr[7] = {2, 5, -1, 7, -3, -1, -2};
//     int k = 4;
//     cout << solve(arr, 7, k) << endl;
// }
// /*18
// PS C:\Users\DELL\OneDrive\Desktop\question\question> */


#include <bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> &nums)
{
    int pro = 1;
    int n = nums.size();
    for (int i = 0; i < 3; i++)
    {
        pro *= nums[i];
    }
    if (n == 3)
    {
        return pro;
    }
    int maxi = pro;
    for (int i = 0, j = 3; i < n-3 && j < n ; i++, j++)
    {
        int ans = pro / nums[i];
        ans *= nums[j];
        pro = ans;
        maxi = max(maxi, ans);
    }
    return maxi;
}
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    int ans =maximumProduct(nums);
    cout<<ans;
}
/*24
PS D:\question\question>*/