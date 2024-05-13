#include <iostream>
using namespace std;
#include <stack>
void solve(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, x);
    s.push(num);
}
void pushbottom(stack<int> &s, int x)
{
    solve(s, x);
}
void print(stack<int> &s)
{
    stack<int> r = s;
    while (!r.empty())
    {
        cout << r.top() << " ";
        r.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s;
    int c;
    cout << "enter the number";
    for (int i = 0; i < 5; i++)
    {
        cin >> c;
        s.push(c);
    }
    print(s);
    pushbottom(s, 9);
    print(s);
}
/*enter the number4
5
6
7
8
8 7 6 5 4
8 7 6 5 4 9
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/