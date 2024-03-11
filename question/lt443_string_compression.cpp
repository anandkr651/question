#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int compress(vector<char> &s)
    {
        int i=0;
        int ansindex=0;
        int n=s.size();
        while(i<n)
        {
            int j=i+1;
            while(s[i]==s[j])
            {
               j++;
            }
            s[ansindex++]=s[i];
            int count=j-i;
            if(count>1)
            {
                string cmp=to_string(count);
                for(char ch:cmp)
                {
                    s[ansindex++]=ch;
                }
            }
            i=j;
        }
        return ansindex;
    }
};
int main()
{
  vector<char>s;
  char p;   
  for(int i=0;i<10;i++)
  {
    cin>>p;
    s.push_back(p);
  }
  solution t;
 cout<<t.compress(s);
}
/*a
a
a 
b
b
b
c
d
d
d
7
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/