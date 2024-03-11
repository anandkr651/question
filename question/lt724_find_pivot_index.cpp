#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int pivotindex(vector<int> &p)
    {
        int totalsum=0;
          for(int i=0;i<p.size();i++)
          {
              totalsum +=p[i];
          }
          int leftsum=0;
          for(int i=0;i<p.size();i++)
          {
            leftsum += p[i];
            if(totalsum - leftsum==leftsum-p[i])
            return i;
          }
          return -1;
    }
};
int main()
{
     vector<int>p(6);
     cout<<"enter the data"<<endl;
     for(int i=0;i<p.size();i++)
     {
        cin>>p[i];
     }
     solution t;
    cout<<"index number is "<<t.pivotindex(p);
}
/*enter the data
1
7
3
6
5
6
index number is 3
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/