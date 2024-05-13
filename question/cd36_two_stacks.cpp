#include <iostream>
using namespace std;
class twostack
{
    int top1;
    int top2;
    int *arr;
    int size;

public:
    twostack(int s)
    {
        top1 = -1;
        top2 = s;
        this->size = s;
        arr = new int[s];
    }
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
    }
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if (top2 <= size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    void print1()
    {
        for (int i = 0; i <= top1; i++)
        {
            cout << "value of top1 " << arr[i] << " ";
        }
        cout << endl;
    }
    void print2()
    {
        for (int i = size-1; i >= top2; i--)
        {
            cout << "value of top2 " << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    twostack t(5);
    t.push1(1);
    t.push2(2);
    t.push1(3);
    t.push2(4);

    t.print1();
    t.print2();
    cout << "value can be pop from top1 " << t.pop1() << endl;
    cout << "value can be pop from top2 " << t.pop2() << endl;
    t.print1();
    t.print2();
}
/*value of top1 1 value of top1 3 
value of top2 2 value of top2 4 
value can be pop from top1 3
value can be pop from top2 4
value of top1 1 
value of top2 2 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/