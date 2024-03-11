#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int>firstnegative(vector<int>&arr,int k)
{
    vector<int>ans;
    deque<int>dq;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            dq.push_back(i);
        }
    }
    if(dq.size()>0)
    {
        ans.push_back(arr[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    for(int i=k;i<arr.size();i++)
    {
        if(!dq.empty()&&i-dq.front()>=k)
        {
            dq.pop_front();
        }
        if(arr[i]<0)
        {
            dq.push_back(i);
        }
        if(dq.size()>0)
        {
            ans.push_back(arr[dq.front()]);
        }
        else{
            ans.push_back(0);
            }
    }
    return ans;
}
int main()
{
    vector<int> arr(5);
    cout<<"enter the number"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int window=2;
  vector<int>p=firstnegative(arr,window);
  for(int i:p)
  {
    cout<<i<<" ";
  }
  cout<<endl;
}
/*enter the number
8
-2
-3
-6
10
-2 -2 -3 -6 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/