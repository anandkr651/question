#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"-5 is present or not "<<s.count(-5)<<endl;
    cout<<"5 is present or not "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(2);
    cout<<"value present at itr "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
}
/*0 1 2 3 5
0 2 3 5
-5 is present or not 0
5 is present or not 1
value present at itr 2
2 3 5
PS C:\Users\DELL\OneDrive\Desktop\dsa in c++\STL>*/