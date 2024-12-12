#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    vector<int> spiral(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startrow = 0;
        int startcol = 0;
        int endrow = row - 1;
        int endcol = col - 1;

        int count = 0;
        int total = row * col;

        while (count < total)
        {
            for (int index = startcol; index <= endcol && count < total; index++)
            {
                ans.push_back(matrix[startrow][index]);
                count++;
            }
            startrow++;
            for (int index = startrow; index <= endrow && count < total; index++)
            {
                ans.push_back(matrix[index][endcol]);
                count++;
            }
            endcol--;
            for (int index = endcol; index >= startcol && count < total; index--)
            {
                ans.push_back(matrix[endrow][index]);
                count++;
            }
            endrow--;
            for (int index = endrow; index >= startrow && count < total; index--)
            {
                ans.push_back(matrix[index][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> s(3, vector<int>(6));
    int p;
    cout << "enter the number";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> s[i][j];
        }
    }
    cout << "display the data " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    solution t;
    vector<int> arr = t.spiral(s);
    for (int i : arr)
    {
        cout << i << " ";
    }
}
/*enter the number1
2
3
4
5
6
7
8
9
display the data
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number1
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
display the data 
1 2 3 4
5 6 7 8
9 10 11 12
1 2 3 4 8 12 11 10 9 5 6 7 6
PS D:\question\question>*/
/*enter the number1
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
13
14
15
16
17
18
display the data 
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
PS D:\question\question>*/
