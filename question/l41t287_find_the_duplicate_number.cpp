#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                return nums[i];
            }
        }
        return -1;
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
    int ans = findDuplicate(nums);
    cout << "duplicate number: " << ans << endl;
    return 0;
}
/*Enter the size of array: 5
Enter the elements of array: 1
3
4
2
3
duplicate number: 3
PS D:\question\question>*/