#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,length=nums.size();
        while(j<length){
            if(nums[i] != nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
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
    int ans = removeDuplicates(nums);
    cout << "remove Duplicates from an array: " << ans << endl;
    return 0;
}
/*Enter the size of array: 3
Enter the elements of array: 1
1
2
remove Duplicates from an array: 2
PS D:\question\question>*/