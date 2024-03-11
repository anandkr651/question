#include<iostream>
#include<vector>
using namespace std;
class solution{
    private:
    int r,e;
    public:
  void reverse(vector<char> &s)
  {
      r=0;
      e=s.size()-1;
      while(r<e)
      {
        swap(s[r],s[e]);
        r++;
        e--;
      }
  }
};
int main()
{
    vector<char>c;
    char h;
    for(int i=0;i<5;i++)
    {
        cin>>h;
        c.push_back(h);
    }
    solution t;
    t.reverse(c);
    for(char a:c)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}
/*h
e
l
l
o
o l l e h 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/