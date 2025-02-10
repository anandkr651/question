#include <iostream>
#include <vector>
using namespace std;
vector<int> waveprint(vector<vector<int>> &arr)
{
    vector<int> ans;
    int g = arr.size();
    int h = arr[0].size();
    // cout<<g<<" "<<h<<endl; //3 4
    for (int col = 0; col < h; col++)
    {
        // if (col & 1)    OR
        if (col % 2 == 1)
        {
            for (int row = g - 1; row >= 0; row--)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < g; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> x(3, vector<int>(4));
    cout << "enter the number" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> x[i][j];
        }
    }
    cout <<"print the array "<< endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }
       
    //OR

    for(auto i:x){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    vector<int> f = waveprint(x);
    for (int i : f)
    {
        cout << i << " ";
    }
}
/*enter the number
1
2
3
4
5
6
7
8
9
10
11
12
print the array 
1 2 3 4
5 6 7 8
9 10 11 12
1 5 9 10 6 2 3 7 11 12 8 4
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/