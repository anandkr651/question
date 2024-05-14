#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int> &nums, int start, vector<int> &path, vector<vector<int>> &result)
{
    result.push_back(path);
    for (int i = start; i < nums.size(); ++i)
    {
        path.push_back(nums[i]);
        backtrack(nums, i + 1, path, result);
        path.pop_back();
    }
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

    // Output the subsets
    for (const auto &subset : subsetsResult)
    {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i)
        {
            cout << subset[i];
            if (i != subset.size() - 1)
                cout << ",";
        }
        cout << "]" << endl;
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