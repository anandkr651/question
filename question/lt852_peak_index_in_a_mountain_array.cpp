#include<iostream>
#include<vector>
using namespace std;
class solution
{
    public:
int peak(vector<int> &a)
{
    int end=a.size()-1,start=0,mid;
    mid=start+(end-start)/2;
    while(start<end)
    {
        if (a[mid]<a[mid+1])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
    mid=start+(end-start)/2;      
    }
    return mid;
}
};
int main()
{
 vector<int>a;
 int b;
 for(int i=0;i<4;i++)
 {
    cin>>b;
    a.push_back(b);
 }
 solution t;
 int d=t.peak(a);
 cout<<"peak elements of index number "<<d<<endl;
}
/*0
10
5
2
peak elements of index number 1
PS C:\Users\DELL\OneDrive\Desktop\question\question>*/