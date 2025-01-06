#include <iostream>
#include <vector>
using namespace std;

// void backtrack(vector<int> &nums, int start, vector<int> &path, vector<vector<int>> &result)
// {
//     result.push_back(path);
//     for (int i = start; i < nums.size(); ++i)
//     {
//         path.push_back(nums[i]);
//         backtrack(nums, i + 1, path, result);
//         path.pop_back();
//     }
// }

//OR
void backtrack(vector<int> &nums, int start, vector<int> &path, vector<vector<int>> &result)
{
    if(start>=nums.size()){
        result.push_back(path);
        return;
    }
    backtrack(nums,start+1,path,result);
    int element = nums[start];
    path.push_back(element);
    backtrack(nums,start+1,path,result);
    path.pop_back();
}


vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> result;
    vector<int> path;
    backtrack(nums, 0, path, result);
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsetsResult = subsets(nums);
    int z=0;
    for(auto i:subsetsResult){
        cout << "[";
        for(auto j:i){
            cout<<j;
            if(z<i.size()-1){
                cout<<",";
                z++;
            }
        }
        cout <<"]";
        z=0;
        cout<<endl;
    }
    return 0;
}
/*[]
[1]
[1,2]
[1,2,3]
[1,3]
[2]
[2,3]
[3]
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/