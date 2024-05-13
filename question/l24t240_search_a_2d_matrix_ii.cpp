// #include <iostream>
// #include <vector>
// using namespace std;
// class solution
// {
// public:
//     bool searchmatrix(vector<vector<int>> &s, int k)
//     {
//         int row = s.size();
//         int col = s[0].size();

//         int rowindex = 0;
//         int colindex = col - 1;
//         while (rowindex < row && colindex >= 0)
//         {
//             if (s[rowindex][colindex] == k)
//             {
//                 return 1;
//             }
//             else if (s[rowindex][colindex] > k)
//             {
//                 colindex--;
//             }
//             else
//             {
//                 rowindex++;
//             }
//         }
//         return 1;
//     }
// };
// int main()
// {
//     vector<vector<int>> s(3, vector<int>(3));
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> s[i][j];
//         }
//     }
//     cout << "display data" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << s[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int k;
//     cout << "enter the data you want to search";
//     cin >> k;
//     solution t;
//     cout << t.searchmatrix(s, k);
// }
// /*1
// 4
// 7
// 2
// 5
// 8
// 3
// 6
// 9
// display data
// 1 4 7
// 2 5 8
// 3 6 9
// enter the data you want to search5
// 1
// PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<vector<int>> s(3, vector<int>(3));
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
    cout<<"hello"<<endl;
    for(const auto &vec:s)
    {
        for(int num:vec)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}