#include<iostream>
using namespace std;

void merge(int x[],int first,int y[],int second,int z[])
{
    int i=0,j=0,k=0;
    while(i<first && j<second)
    {
        if(x[i]>y[j])
        {
            z[k++]=y[j++];
        }
        else
        {
            z[k++]=x[i++];
        }
    }
    while(j<second)
    {
        z[k++]=y[j++];
    }
    while(i<first)
    {
        z[k++]=x[i++];
    }
}

void pick(int p[],int size)
{
    int a;
    for(a=0;a<size;a++)
    {
        cout<<p[a]<<" ";
    }cout<<endl;
}
int main()
{
    int arr1[5]={2,4,6,8,9};
    int arr2[3]={1,3,5};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    pick(arr3,8);
}
/*1 2 3 4 5 6 8 9 
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/

//without used of additional size of ana array
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<int> merge(vector<int>s,vector<int>m)
{
    int x=s.size();
    int y=m.size();
    int t=x+y;
    int i,j=0;
    cout<<"hello";
    for(i=y;i<t;i++)
    {
        s[i]=m[j++];
    }
    sort(s.begin(),s.end());
    return s;
}
void print(vector<int> s)
{
    int x=s.size();
  for(int i=0;i<x;i++)
  {
    cout<<s[i]<<" ";
  }cout<<endl;
}
int main()
{
    vector<int> s;
    s.push_back(1);
    s.push_back(3);
    s.push_back(5);
    s.push_back(0);
    s.push_back(0);
    s.push_back(0);

    vector<int> m;
    m.push_back(2);
    m.push_back(4);
    m.push_back(6);

    for(int i:s)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size of first array "<<s.size()<<endl;

    for(int i:m)
    {
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size of second array "<<m.size()<<endl;

   vector<int> ans = merge(s,m);
    print(ans);
}
/*1 3 5 0 0 0 
size of first array 6 
2 4 6 
size of second array 3
hello1 2 3 4 5 6      
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/