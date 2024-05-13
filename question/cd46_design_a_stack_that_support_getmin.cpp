#include <iostream>
#include <stack>
using namespace std;
class specialstack
{
    stack<int> s;
    int mini;

public:
    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }
    void pop()
    {
        if (s.empty())
        {
            return;
        }
        int curr = s.top();
        s.pop();
        if (curr < mini)
        {
            mini = 2 * mini - curr;
        }
    }
    int top()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }
    int getmin()
    {
        if (s.empty())
        {
            return -1;
        }
        return mini;
    }
};
int main()
{
    specialstack s;
    s.push(13);
    s.push(47);
    cout << "top " << s.top() << endl;
    s.push(8);
    s.pop();
    cout << "mini " << s.getmin();
}
/*top 47
mini 13
PS C:\Users\DELL\OneDrive\Desktop\question\question> */