#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    bool search(vector<vector<int>> &s, int k)
    {
        int row = s.size();
        int col = s[0].size();
        int start = 0;
        int end = row * col - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (s[mid / col][mid % col] == k)
                return 1;
            if (s[mid / col][mid % col] > k)
                end = mid - 1;
            else
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return 0;
    }
};
int main()
{
    vector<vector<int>> s(2, vector<int>(2));
    int k;
    cout << "enter the data" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> s[i][j];
        }
    }
    cout << "display data" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    cout << "enter the data you want to search" << endl;
    cin >> k;
    solution t;
    int p = t.search(s, k);
    cout << p;
}
/*enter the data
1
2
3
4
display data
1 2
3 4
enter the data you want to search
3
1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/