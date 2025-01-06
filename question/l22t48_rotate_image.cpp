#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
public:
    void rotate(vector<vector<int>> &s)
    {
        reverse(s.begin(), s.end());
        cout<<"reverse the data"<<endl;
        for(auto i:s){
            for(auto n:i){
                cout<<n<<" ";
            }
            cout<<endl;
        }
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s[0].size(); j++)
            {
                swap(s[i][j], s[j][i]);
            }
        }
    }
};
int main()
{
    vector<vector<int>> s(3, vector<int>(3));
    cout << "enter the number";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> s[i][j];
        }
    }
    cout << "display data" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
    solution t;
    t.rotate(s);
    cout << "hello" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
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
display data
1 2 3
4 5 6
7 8 9
reverse the data
7 8 9
4 5 6
1 2 3
hello
7 4 1
8 5 2
9 6 3 
PS D:\question\question>*/