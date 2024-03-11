#include<iostream>
#include<vector>
using namespace std;
class solution {
    private:
    int i,j;
public:
void movezero(vector<int>&num)
{
    for(i=0;i<num.size();i++)
    {
        for(j=0;j<num.size()-1;j++)
        {
            if(num[j]==0)
            {
                swap(num[j],num[j+1]);
            }
        }
    }
}
};
int main()
{
   vector<int>s;
   int p;
   cout<<"enter the number";
   for(int i=0;i<5;i++)
   {
    cin>>p;
    s.push_back(p);
   }
   solution t;
   t.movezero(s);
   for(int i:s)
   {
    cout<<i<<" ";
   }
}
/*enter the number0
1
0
3
12
1 3 12 0 0 
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/