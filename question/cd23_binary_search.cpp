#include <iostream>
#include<vector>
using namespace std;
int bsearch(vector<int>&nums,int start, int end,int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] > target)
    {
        end=mid-1;
    }
    else
    {
       start=mid+1;
    }
    mid = start + (end - start) / 2;
    }
    return -1;
}
int search(vector<int>&nums,int target)
{
    return bsearch(nums,0,nums.size()-1,target);
}
int main()
{
    int k;
    vector<int>nums(7);
    cout<<"enter the number"<<endl;
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    cout<<"which elements you can find"<<endl;
    cin>>k;
    cout<<search(nums,k);
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
3
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/