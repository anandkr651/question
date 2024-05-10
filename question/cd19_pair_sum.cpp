// CodeStudio

/*Q. you are given an integer array 'ARR' of size 'N' and an integer 's'. your task is to return the list of all
pair of elements such that each sum of elements of each pair equal 's'.*/

/*Note :-- each pair should be sorted i.e the first value should be less than or equals to the second value.

return the list of pairs sorted in non-decreasing order of their first value. in case if two pair have the same
first value, the pair with a smaller second value should come first.*/

/*  Example : input : 1,2,3,4,5   s=5
              output : (1,4),(2,3)*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> pairsum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> arr;
    int p, a, b;
    cout << "enter the size of an array" << endl;
    cin >> p;
    cout << "enter the number" << endl;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "enter the sum" << endl;
    cin >> b;
    vector<vector<int>> abc = pairsum(arr, b);
    cout << "sum is" << endl;
    for (int i = 0; i < abc.size(); i++)
    {
        for (int j = 0; j < abc[0].size(); j++)
        {
            cout << abc[i][j] << " ";
        }
        cout << endl;
    }
}
/*enter the size of an array
5
enter the number
1
2
3
4
5
enter the sum
5
sum is
1 4
2 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/