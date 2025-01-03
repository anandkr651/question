//the code is similar to reverse of stack
#include <iostream>
using namespace std;
#include <stack>
void interchange(stack<int> &s, int x)
{
    if (s.empty() || (!s.empty() && s.top() < x))
    {
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    interchange(s, x);
    s.push(num);
}
void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    sort(s);
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
    sort(s);
    print(s);
}
/*enter the number6
4
9
1
78
78 1 9 4 6
78 9 6 4 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/