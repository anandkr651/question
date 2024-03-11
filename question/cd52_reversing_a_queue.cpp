#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int>reverseq(queue<int>p)
    {
        stack<int>s;
        while(!p.empty())
        {
            int element=p.front();
            p.pop();
            s.push(element);
        }
        while(!s.empty())
        {
             int element=s.top();
             s.pop();
             p.push(element);
        }
        return p;
    }
int main()
{
  queue<int> p;
  int q;
  cout<<"enter the data"<<endl;
  for(int i=0;i<5;i++)
  {
      cin>>q;
      p.push(q);
  }
queue<int> z=reverseq(p);
queue<int> c=z;
while(!c.empty())
{
    int element=c.front();
    c.pop();
    cout<<element<<" ";
}
}
/*enter the data
2
4
5
6
7
7 6 5 4 2 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/