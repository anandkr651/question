#include<iostream>
using namespace std;
#include<vector>
bool check(int n)
{
    vector<int>p;
    int ans=n;
    while(n!=0)
    {
        int res=n%2;
        p.push_back(res);
        n=n/2;
    }
    int s=0,e=p.size()-1;
    while(s<e)
    {
        if(p[s]==p[e])
        {
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<check(n);
}
/*enter the number2
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/
/*enter the number10
0
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/