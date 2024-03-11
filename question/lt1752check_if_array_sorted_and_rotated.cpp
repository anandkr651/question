#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int count=0;
    bool check(vector<int> s)
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]>s[i])
            {
                count++;
            }
        }
        if(s[s.size()-1]>s[0])
        {
                count++;
        }
        return count<=1;
    }
};
int main()
{
    int a;
    vector<int>s;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        s.push_back(a);
    }
    solution t;
   if(t.check(s))
   {
    cout<<"array is sorted and rotated"<<endl;
   }
   else{
    cout<<"array is not sorted and rotated"<<endl;
   }
}
/*3
4
5
1
2
array is sorted and rotated
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/