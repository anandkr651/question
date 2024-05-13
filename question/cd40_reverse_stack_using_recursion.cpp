#include <iostream>
using namespace std;
#include <stack>
void interchange(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    interchange(s, x);
    s.push(num);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    reverse(s);
    interchange(s, num);
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
    reverse(s);
    print(s);
}
/*enter the number4
5
6
8
9
9 8 6 5 4
4 5 6 8 9
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/