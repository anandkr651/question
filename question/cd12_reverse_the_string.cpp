#include<iostream>
#include<algorithm>
using namespace std;
void reverse(string &ans)
{
    int i=0,j=ans.size()-1;
    if(i<=j)
    {
        swap(ans[i++],ans[j--]);
    }
}
int main()
{
    string ans="anand";
    reverse(ans);
    cout<<"reverse of the ans"<<endl;
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans.at(i);
    }  
}
/*reverse of the ans
dnana
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\question> */