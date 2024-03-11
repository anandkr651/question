#include<iostream>
using namespace std;
#include<queue>
#include<stack>
queue<int> interleavequeue(queue<int>q)
{
    stack<int>s;
    int n=q.size()/2;
    for(int i=0;i<n;i++)
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty())
    {
        int val=s.top();
        s.pop();
        q.push(val);      
    }
    int h=n;
    while(h--)
    {
        int val=q.front();
        q.pop();
        q.push(val);
    }
    for(int i=0;i<n;i++)
    {
        int val=q.front();
        q.pop();
        s.push(val);
    }
    while(n--)
    {
        int val=s.top();
        s.pop();
        q.push(val);
        val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main()
{
    int a;
    queue<int> q;
    for(int i=0;i<6;i++)
    {
        cin>>a;
        q.push(a);
    }
   queue<int>p=interleavequeue(q);
    queue<int>z=p;
    while(!z.empty())
    {
        int val=z.front();
        z.pop();
        cout<<val<<" ";
    }
}
/*10
20
30
40
50
60
10 40 20 50 30 60 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/