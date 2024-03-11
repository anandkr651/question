#include <iostream>
#include <algorithm>
using namespace std;
class solution{
    public:
string remove(string s,string part)
{
    while(s.length() !=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
};
int main()
{
    string s="daabcbaabcbc",p;
    string part="abc";
    solution t;
    p=t.remove(s,part);
    cout<<p;
}
/*dab
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL> */