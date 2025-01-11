#include <iostream>
#include <algorithm>
using namespace std;
// void reverse(string &ans,int i,int j)  //the time complexity is o(n).
// {
//     while (i < j)
//     {
//         swap(ans[i++], ans[j--]);
//     }
// }
void reverse(string &ans,int i,int j)  //the time complexity is o(1).
{
    if (i > j)
    {
        return;
    }
    swap(ans[i++], ans[j--]);
    reverse(ans,i,j);
}
int main()
{
    string ans = "abcdef";
    reverse(ans,0,ans.size()-1);
    //OR
    // reverse(ans.begin(),ans.end());
    cout << "reverse of the ans" << endl;
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans.at(i);
    }
}
/*reverse of the ans
fedcba
PS D:\question\question> */