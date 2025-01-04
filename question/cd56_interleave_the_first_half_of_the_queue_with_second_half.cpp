#include <iostream>
using namespace std;
#include <queue>
#include <stack>
queue<int> interleavequeue(queue<int> q)
{
    stack<int> s;
    int n = q.size() / 2;
    for (int i = 0; i < n; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    int h = n;
    while (h--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    for (int i = 0; i < n; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while (n--)
    {
        int val = s.top();
        s.pop();
        q.push(val);
        val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
//OR
queue<int> interleavequeue(queue<int> q)
{
    queue<int> q1;
    int n=q.size()/2;
    for(int i=0;i<n;i++)
    {
        q1.push(q.front());
        q.pop();
    }
    while(!q1.empty()){
        q.push(q1.front());
        q1.pop();
        q.push(q.front());
        q.pop();
    }
    return q;
}
int main()
{
    int a;
    queue<int> q;
    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        q.push(a);
    }
    queue<int> z = interleavequeue(q);
    while (!z.empty())
    {
        int val = z.front();
        z.pop();
        cout << val << " ";
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