#include<iostream>
#include<vector>
using namespace std;
int solve(int n,vector<int>&days,vector<int>&cost,int index)
{
    if(index >=n)
    {
        return 0;
    }
    int onedays=cost[0]+solve(n,days,cost,index+1);

    int i;
    for(i=index;i<n&&days[i]<days[index]+7;i++)
    {}
    int sevendays=cost[1]+solve(n,days,cost,i);

    for(i=index;i<n&&days[i]<days[index]+30;i++)
    {}
    int thirtyays=cost[2]+solve(n,days,cost,i);

    int ans=min(thirtyays,min(sevendays,onedays));
    return ans;
}
int main()
{
    int n;
    cout<<"number of days ninja want to travel ";
    cin>>n;
    vector<int>days(n);
    cout<<"enter the days"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>days[i];
    }
    vector<int>cost(3);
    cout<<"enter the cost of 1 day,7 days,30 days"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>cost[i];
    }
    cout<<"minimum cost for the ninja trip "<<solve(n,days,cost,0);
}
/*number of days ninja want to travel 7
enter the days
1
3
4
5
7
8
10
enter the cost of 1 day,7 days,30 days
2
7
20
minimum cost for the ninja trip 11
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/

#include<iostream>
#include<vector>
using namespace std;
int solve(int n,vector<int>&days,vector<int>&cost,int index,vector<int>&dp)
{
    if(index >=n)
    {
        return 0;
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    int onedays=cost[0]+solve(n,days,cost,index+1,dp);

    int i;
    for(i=index;i<n&&days[i]<days[index]+7;i++)
    {}
    int sevendays=cost[1]+solve(n,days,cost,i,dp);

    for(i=index;i<n&&days[i]<days[index]+30;i++)
    {}
    int thirtyays=cost[2]+solve(n,days,cost,i,dp);

    int ans=min(thirtyays,min(sevendays,onedays));
    dp[index]=ans;
    return dp[index];
}
int main()
{
    int n;
    cout<<"number of days ninja want to travel ";
    cin>>n;
    vector<int>days(n);
    cout<<"enter the days"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>days[i];
    }
    vector<int>cost(3);
    cout<<"enter the cost of 1 day,7 days,30 days"<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>cost[i];
    }
    vector<int>dp(n+1,-1);
    cout<<"minimum cost for the ninja trip "<<solve(n,days,cost,0,dp);
}
/*number of days ninja want to travel 12
enter the days
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
30
31
enter the cost of 1 day,7 days,30 days
2
7
15
minimum cost for the ninja trip 17
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/