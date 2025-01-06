#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
     int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
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
    int ans = removeElement(nums, target);
    cout << "return the number of elements in nums which are not equal to target: " << ans << endl;
    return 0;
}
/*Enter the size of array: 4
Enter the elements of array: 2
2
3
4
enter the target element: 4
return the number of elements in nums which are not equal to target: 3
PS D:\question\question>*/