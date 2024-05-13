#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    void rotate(vector<int> &s, int k)
    {
        vector<int> temp(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            temp[(i + k) % s.size()] = s[i];
        }
        s = temp;
    }
    void display(vector<int> s)
    {
        cout << "rotated array" << endl;
        for (int i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main()
{
    vector<int> s;
    int p, r;
    cout << "enter the number" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> p;
        s.push_back(p);
    }
    cout << "which position you want to rotate" << endl;
    cin >> r;
    solution t;
    t.rotate(s, r);
    t.display(s);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}
/*enter the number
1
2
3
4
5
which position you want to rotate
2
rotated array
4 5 1 2 3
4 5 1 2 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/