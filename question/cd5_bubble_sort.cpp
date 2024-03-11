#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int> &ans, int s)
{
    int i, j;
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < s - i - 1; j++)
        {
            if (ans[j] > ans[j + 1])
            {
                swap(ans[j], ans[j + 1]);
            }
        }
    }
}
int main()
{
    int p, s = 6;
    vector<int> ans;
    cout << "enter the number" << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> p;
        ans.push_back(p);
    }
    bubble(ans, s);
    for (int k : ans)
    {
        cout << k << " ";
    }
}
/*enter the number
16
15
6
8
5
1
1 5 6 8 15 16 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question>*/