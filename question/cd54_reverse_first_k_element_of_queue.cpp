#include<iostream>
using namespace std;
#include<stack>
#include<queue>
queue<int>reverseelement(queue<int>q,int k)
{
   stack<int>s;
   for(int i=0;i<k;i++)
   {
      int c=q.front();
      q.pop();
      s.push(c); 
   }
   while(!s.empty())
   {
      int a=s.top();
      s.pop();
      q.push(a);
   }
   int t=q.size()-k;
   while(t--)
   {
      int val=q.front();
      q.pop();
      q.push(val);
   }
   return q;
}
int main()
{
    int a;
    queue<int> s;
    cout<<"enter the data"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        s.push(a);
    }
    int kgroup=3;
    queue<int>p=reverseelement(s,kgroup);
    queue<int>z=p;
    while(!z.empty())
    {
        cout<<z.front()<<" ";
        z.pop();
    }
    cout<<endl;
}
/*enter the data
1
2
3
4
5
3 2 1 4 5 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/