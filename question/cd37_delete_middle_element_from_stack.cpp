#include <iostream>
using namespace std;
#include <stack>
void solve(stack<int> &s, int size, int count)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    count++;
    int num = s.top();
    s.pop();
    solve(s, size, count);
    s.push(num);
}
void deletemiddle(stack<int> &s, int n)
{
    int count = 0;
    solve(s, n, count);
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
    int p;
    cout << "enter the number";
    for (int i = 0; i < 5; i++)
    {
        cin >> p;
        s.push(p);
    }
    print(s);
    deletemiddle(s, 5);
    print(s);
}
/*enter the number4
5
8
2
9
9 2 8 5 4
9 2 5 4
PS C:\Users\DELL\OneDrive\Desktop\question\question> */